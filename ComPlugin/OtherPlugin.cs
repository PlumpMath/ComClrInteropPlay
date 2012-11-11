namespace ComPlugin
{
    using ComCalculatorLib;
    using System;
    using System.Runtime.InteropServices;

    [ComVisible(true)]
    [ProgId("ComPlugin.OtherPlugin")]
    [Guid("16398924-673F-4F2C-AA4B-E26013334266")]
    public class OtherPlugin : ITheCalculator
    {
        CalculatorApplication application;

        public void Initialize(CalculatorApplication application)
        {
            Helper.ReportDomain("OtherPlugin");

            this.application = application;
        }

        public int Add(int left, int right)
        {
            return left + right;
        }
    }
}
