#include <stdio.h>
#include "main.h"

void main() {
	test_getPerimeter();
	test_getArea();
}

// Unit test for getPerimeter
void test_getPerimeter() {
	// case 1: length and width are positive integers
	int length1 = 10;
	int width1 = 5;
	int result1 = getPerimeter(&length1, &width1);
	assert(result1 == 30);

	// case 2: length = 0
	int length2 = 0;
	int width2 = 10;
	int result2 = getPerimeter(&length2, &width2);
	assert(result2 == 20);

	// case 3: width = 0
	int length3 = 12;
	int width3 = 0;
	int result3 = getPerimeter(&length3, &width3);
	assert(result3 == 24);

	// case 4: length and width are negative integers
	int length4 = -2;
	int width4 = -1;
	int result4 = getPerimeter(&length4, &width4);
	assert(result4 == -6);

	// case 5: negative width
	int length5 = 2;
	int width5 = -4;
	int result5 = getPerimeter(&length5, &width5);
	assert(result5 == -4);
}

// Unit test for getArea
void test_getArea() {
	// case 1: length and width are positive integers
	int length1 = 5;
	int width1 = 4;
	int result1 = getArea(&length1, &width1);
	assert(result1 == 20);

	// case 2: length = 0
	int length2 = 0;
	int width2 = 10;
	int result2 = getArea(&length2, &width2);
	assert(result2 == 0);

	// case 3: width = 0
	int length3 = 20;
	int width3 = 0;
	int result3 = getArea(&length3, &width3);
	assert(result3 == 0);

	//case 4: length and width are negative integers
	int length4 = -3;
	int width4 = -4;
	int result4 = getArea(&length4, &width4);
	assert(result4 == 12);
}
