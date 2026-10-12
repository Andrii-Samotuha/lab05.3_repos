
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab053
{
    TEST_CLASS(UnitTestLab053)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t = z(0.5);

            Assert::AreEqual(1.2534314381, t, 0.000001);
        }
    };
}
