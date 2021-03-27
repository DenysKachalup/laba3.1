#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.1/Triad.h"
#include "../lab3.1/Triad.cpp"
#include "../lab3.1/Time.h"
#include "../lab3.1/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Time a(1, 2, 3);
			a++;
			int b = a.getF();
			Assert::AreEqual(b, 2);
		}
	};
}
