namespace ComPlugin
{
    using ComCalculatorLib;
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Runtime.InteropServices;
    using System.Text;
    using System.Threading.Tasks;

    [ComVisible(true)]
    [ProgId("ComPlugin.MyCalculator")]
    [Guid("2C1B9DAA-E436-43C2-9F77-3C48BA2F8537")]
    public class MyCalculator : ITheCalculator
    {
        CalculatorApplication application;

        public void Initialize(CalculatorApplication application)
        {
            this.application = application;    
        }

        public int Add(int left, int right)
        {
            return left + right * 10;
        }
    }
}
