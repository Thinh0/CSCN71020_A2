#include <stdio.h>
#include

// functions to test
void setLength(int input, int* length);
void setWidth(int input, int* width);

// unit tests for setLength function
void test_setLength_Usual() {		// case 1
	int length = 0;		// initial length (does not matter)
	int input = 15;		// usual input within the range from 1 to 99

	setLength(input, &length);
	assert(length == 15);
}

void test_setLength_Unusual() {		// case 2
	int length = 30;		// initial length
	int input = 300;

	setLength(input, &length);
	assert(length == 99);	// check if the function clamps the input to the valid range
}

void test_setLength_Edge() {
	int length = 1;		// initial value at the lower bound
	int input = 0;

	setLength(input, &length);
	assert(length == 1);	// check if the lower bound is respected
}

// unit tests for setWidth function
void test_setWidth_Usual() {
	int width = 0;		// initial value
	int input = 22;		

	setWidth(input, &width);
	assert(width == 22);	// check if width is set to expected value
}

void test_setWidth_Unusual() {
	int width = 10;
	int input = 0;

	setWidth(input, &width);
	assert(width == 1);		// check if the function handles a minimum value of 0
}

void test_setWidth_Edge() {
	int width = 1;
	int input = -1;

	setWidth(input, &width);
	assert(width == 1);		// check if the lower bound is respected 
}
