using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MSTest_Lib;
 
namespace MSTest
{
    class Program
    {
        static void Main(string[] args)
        {
            var a = ClassAdd.Add(1, 2);
            Console.WriteLine(a);
            Console.ReadKey();
        }
    }
}
