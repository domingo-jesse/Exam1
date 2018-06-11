//I affirm that all code given below was written solely by me, Jesse Domingo, and that any help I received adhered to the rules stated for this exam.
/// 
//Written by Jesse Domingo 
// Teacher Pete Tucker 
// CS273 (Summer) 
// 6/11/2018
///
#include "stdafx.h"
#include "CppUnitTest.h"
#include "Sedan.h"
#include "Pickup.h"
#include "Racecar.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTester
{
	TEST_CLASS(UnitTest1)
	{
	public:
		//seats,mph,numwheels,rad
		TEST_METHOD(SedanNegitives)
		{
			Assert::AreEqual(VaildSedan(-1, -1, -1, -1), false);
		}
		TEST_METHOD(SedanZerosButRadiusAndseat)
		{
			Assert::AreEqual(VaildSedan(1, 0, 0, 1), true);
		}
		TEST_METHOD(SedanallZero)
		{
			Assert::AreEqual(VaildSedan(0, 0, 0, 0), false);
		}
		TEST_METHOD(SedanallPostive)
		{
			Assert::AreEqual(VaildSedan(1, 1, 1, 1), true);
		}
		TEST_METHOD(PickupVehicleNegitives)
		{
			Assert::AreEqual(VaildPickup(-1, -1, -1, -1), false);
		}
		TEST_METHOD(PickupZerosButRadiusAndseat)
		{
			Assert::AreEqual(VaildPickup(1, 0, 0, 1), true);
		}
		TEST_METHOD(PickupallZero)
		{
			Assert::AreEqual(VaildPickup(0, 0, 0, 0), false);
		}
		TEST_METHOD(PickupallPostive)
		{
			Assert::AreEqual(VaildPickup(1, 1, 1, 1), true);
		}
		TEST_METHOD(RacecarVehicleNegitives)
		{
			Assert::AreEqual(VaildRacecar( -1, -1, -1), false);
		}
		TEST_METHOD(RacecarallZero)
		{
			Assert::AreEqual(VaildRacecar( 0, 0, 0), true);
		}
		TEST_METHOD(RacecarallPostive)
		{
			Assert::AreEqual(VaildRacecar( 1, 1, 1), true);
		}
	};
}