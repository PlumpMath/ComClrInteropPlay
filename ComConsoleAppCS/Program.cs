using ComCalculatorLib;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComConsoleAppCS
{
    class Program
    {
        static void Main(string[] args)
        {
            TheCalculator theCalc = new TheCalculator();
            var result = theCalc.Add(2, 4);
        }
    }
}
