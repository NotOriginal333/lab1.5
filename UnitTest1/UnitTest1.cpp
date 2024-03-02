#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.5/Long.h"
#include "../lab1.5/Long.cpp"
#include "../lab1.5/Pair.h"
#include "../lab1.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Long num1, num2, sum;
			Pair pair1, pair2, pairSum;
			pair1.setFirst(3);
			pair1.setSecond(5);
			pair2.setFirst(7);
			pair2.setSecond(2);
			num1.Init(pair1);
			num2.Init(pair2);

			pairSum = pair1.add(pair2);

			sum = num1.add(num2);

			Assert::AreEqual(pairSum.getFirst(), sum.getNumber().getFirst());
			Assert::AreEqual(pairSum.getSecond(), sum.getNumber().getSecond());
		}
	};
}
