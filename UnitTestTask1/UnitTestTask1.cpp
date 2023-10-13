#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTask1
{
	TEST_CLASS(UnitTestTask1)
	{
	public:
		
		TEST_METHOD(TestGetPerimeter)
		{
			int length = 5;
			int width = 3;
			int expected = 16;		
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(expected, perimeter);
		}

		TEST_METHOD(TestGetArea)
		{
			int length = 5;
			int width = 4;
			int expected = 20;
			int area = getArea(&length, &width);
			Assert::AreEqual(expected, area);
		}
	};
}
