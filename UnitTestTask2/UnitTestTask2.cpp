#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTask2
{
	TEST_CLASS(UnitTestTask2)
	{
	public:
		
		TEST_METHOD(TestSetLength_Usual)
		{
			int length = 0;
			int expected = 22;
			setLength(expected, &length);
			Assert::AreEqual(expected, length);
		}

		TEST_METHOD(TestSetLength_Unusual)
		{
			int length = 0;
			int expected = 1;
			setLength(expected, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(TestSetLength_Edge)
		{
			int length = 100;
			int expected = 99;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(TestSetWidth_Usual)
		{
			int width = 0;
			int expected = 8;
			setWidth(expected, &width);
			Assert::AreEqual(expected, width);
		}

		TEST_METHOD(TestSetWidth_Unusual)
		{
			int width = 200;
			int expected = 99;
			setWidth(expected, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(TestSetWidth_Edge)
		{
			int width = 0;
			int expected = 1;
			setWidth(1, &width);
			Assert::AreEqual(expected, width);
		}
	};
}
