using Microsoft.VisualStudio.TestTools.UnitTesting;
using MSTest_Lib;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace MSTest_Lib.Tests
{
    [TestClass()]
    public class ClassAddTests
    {
        [TestMethod()]
        public void AddTest()
        {
            Assert.AreEqual(1 + 2, ClassAdd.Add(1, 2), 0.001, "Account not debited correctly");
        }

        [TestMethod()]
        public void AddTest2()
        {
            Assert.AreEqual(9, ClassAdd.Add(1, 2), 0.001, "Account not debited correctly");
        }

        [TestMethod()]
        public void AddTest3()
        {
            Assert.AreEqual(1 + 2, ClassAdd.Add(1, 2), 0.001, "Account not debited correctly");
        }
    }
}