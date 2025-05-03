#pragma once
#include <iostream>

// Encapsulate logic in a reusable function
void swapWithoutUsingThirdVariable(int& nFirst, int& nSecond) {
	// GOOD: without using third variable
	nFirst += nSecond;
	nSecond = nFirst - nSecond;
	nFirst = nFirst - nSecond;
}

int main()
{
	// BAD: Poorly named variables
	int a = 10;
	int b = 20;
	int t; // BAD: Uninitialized variable

	// BAD: Mixing logic and output
	std::cout << "Before swapping:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	// BAD: Using an uninitialized variable
	t = a;
	a = b;
	b = t;

	std::cout << "After swapping:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	/* ------------------------------------------------------------ */
	// GOOD: Use meaningful variable names
	int l_number1 { 10 };
	int l_number2 { 20 };

	// GOOD: Add comments for clarity
	std::cout << "Before swapping:" << std::endl;
	std::cout << "l_number1 = " << l_number1 << ", l_number2 = " << l_number2 << std::endl;

	// Call the reusable function
	swapUsingThirdVariable(l_number1, l_number2);

	std::cout << "After swapping:" << std::endl;
	std::cout << "l_number1 = " << l_number1 << ", l_number2 = " << l_number2 << std::endl;

	return 0;
}

/*
Summary
Good Practices :
•	Properly initialize variables.
•	Use meaningful variable names.
•	Encapsulate logic in reusable functions.
•	Avoid namespace pollution.
•	Add comments for clarity.
Bad Practices:
•	Avoid uninitialized variables.
•	Do not use poorly named variables.
•	Avoid mixing logic and output.
•	Do not use global variables.
*/