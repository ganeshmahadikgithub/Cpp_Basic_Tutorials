#pragma once
#include <iostream>

using namespace std;

int main()
{
	// Initialize variables l_number1, l_number2
	int l_number1{ 10 };
	int l_number2{ 20 };

	// Print the values of l_number1 and l_number2
	std::cout << "Initial values of l_number1 and l_number2 are:" << std::endl;
	std::cout << "l_number1 = " << l_number1 << std::endl;
	std::cout << "l_number2 = " << l_number2 << std::endl;

	//without using third variable
	l_number1 += l_number2;
	l_number2  = l_number1 - l_number2;
	l_number1  = l_number1 - l_number2;

	std::cout << "After swapping:" << std::endl;
	std::cout << "l_number1 = " << l_number1 << std::endl;
	std::cout << "l_number2 = " << l_number2 << std::endl;

	return 0;
}