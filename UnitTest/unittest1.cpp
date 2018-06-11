#include "stdafx.h"
#include "CppUnitTest.h"
#include "Sedan.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(VaildSedan(3, 3, 7, 10), false);
		}

	};
}