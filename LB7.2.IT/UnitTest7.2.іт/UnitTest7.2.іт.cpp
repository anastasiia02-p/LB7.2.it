#include "pch.h"
#include "CppUnitTest.h"
#include "../LB7.2.IT/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72іт
{
	TEST_CLASS(UnitTest72іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int rowCount = 3;
            int colCount = 3;

            int** a = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
                a[i] = new int[colCount];

            a[0][0] = 1; a[0][1] = 4; a[0][2] = 3;
            a[1][0] = 7; a[1][1] = 2; a[1][2] = 9;
            a[2][0] = 5; a[2][1] = 8; a[2][2] = 6;

            findMinOfMaxInOddColumns(a, rowCount, colCount);
            
            int expectedResult = 8;
            int actualResult = 8;
            Assert::AreEqual(expectedResult, actualResult);
            for (int i = 0; i < rowCount; i++)
                delete[] a[i];
            delete[] a;
		}
	};
}
