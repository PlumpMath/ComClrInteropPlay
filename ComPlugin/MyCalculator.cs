namespace ComPlugin
{
    using ComCalculatorLib;
    using System;
    using System.Diagnostics;
    using System.IO;
    using System.Reflection;
    using System.Runtime.InteropServices;

    [ComVisible(true)]
    [ProgId("ComPlugin.MyCalculator")]
    [Guid("2C1B9DAA-E436-43C2-9F77-3C48BA2F8537")]
    public class MyCalculator : ICalculatorPlugin
    {
        CalculatorApplication application;
        SecondaryApplicationDomainManager secondaryApplicationDomain;

        public void Initialize(CalculatorApplication application)
        {
            Helper.ReportDomain();

            this.application = application;

            CreateSecondDomainAndAskApplicationToLoadPlugin();
        }

        private void CreateSecondDomainAndAskApplicationToLoadPlugin()
        {
            this.secondaryApplicationDomain = new SecondaryApplicationDomainManager();

            this.secondaryApplicationDomain.InDomainObject.SmuggleApplication(
                    Marshal.GetIUnknownForObject(application)
            );

            this.secondaryApplicationDomain.InDomainObject.WreakHavoc();
        }

        public int Add(int left, int right)
        {
            Helper.ReportDomain();

            // Call an API on the application which uses the plugin we loaded
            // from the wrong domain
            return application.GetPlugin("ComPlugin.OtherPlugin").Add(left, right);
        }
    }

    public class SecondaryApplicationDomainManager : MarshalByRefObject
    {
        AppDomain applicationDomain;
        InDomainObject inDomainObject;

        public SecondaryApplicationDomainManager()
        {
            AppDomainSetup setup = new AppDomainSetup()
            {
                ApplicationBase = Path.GetDirectoryName(typeof(SecondaryApplicationDomainManager).Assembly.Location)
            };

            applicationDomain = AppDomain.CreateDomain("Secondary Domain", null, setup);

            var typeToCreateInSecondaryDomain = typeof(InDomainObject);
            var assemblyOfTypeToCreateInSecondaryDomain = typeToCreateInSecondaryDomain.Assembly;
            var nameOfAssembly = assemblyOfTypeToCreateInSecondaryDomain.FullName;

            AppDomain.CurrentDomain.AssemblyResolve += (sender, e) =>
            {
                var name = new AssemblyName(e.Name);

                if (name.FullName == nameOfAssembly)
                {
                    return assemblyOfTypeToCreateInSecondaryDomain;
                }

                return null;
            };

            var inDomainObjectTemp = applicationDomain.CreateInstanceAndUnwrap(nameOfAssembly, typeToCreateInSecondaryDomain.FullName);
            inDomainObject = (InDomainObject)inDomainObjectTemp;
        }

        public InDomainObject InDomainObject
        {
            get { return inDomainObject; }
        }

        public override object InitializeLifetimeService()
        {
            return null;
        }
    }

    public class InDomainObject : MarshalByRefObject
    {
        private CalculatorApplication mApplication;

        public InDomainObject()
        {
            Helper.ReportDomain();
        }

        public void SmuggleApplication(IntPtr punkApplication)
        {
            mApplication = (CalculatorApplication)Marshal.GetTypedObjectForIUnknown(punkApplication, typeof(CalculatorApplication));
        }

        public void WreakHavoc()
        {
            mApplication.GetPlugin("ComPlugin.OtherPlugin");
        }

        public override object InitializeLifetimeService()
        {
            return null;
        }
    }

    internal static class Helper
    {
        public static void ReportDomain()
        {
            const int THIS_STACK_FRAME = 0;
            const int PREVIOUS_STACK_FRAME = THIS_STACK_FRAME + 1;

            var st = new StackTrace();
            var caller = st.GetFrame(PREVIOUS_STACK_FRAME);
            var method = caller.GetMethod();

            Console.WriteLine("{0}::{1} [Domain: '{2}', CLR version: '{3}']", method.DeclaringType.Name, method.Name, AppDomain.CurrentDomain.FriendlyName, Environment.Version);
        }
    }
}
