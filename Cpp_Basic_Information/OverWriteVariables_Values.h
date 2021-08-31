#pragma once
#include <iostream>

//Problem statement#
//In this challenge, your task is to :
//
//Declare a variable : int l_number
//Initialize l_number to 5000
//Print the value of the l_number
//Overwrite the value of l_number to 1000
//Print the value of the l_number again in the new line
// 
//Output#
//Your code should have the following output.
//
//Number = 5000
//Number = 1000

using namespace std;

int main() 
{
	int l_number { 5000 };
	std::cout << "Number = " << l_number << std::endl;

	l_number = 1000;
	std::cout << "Number = " << l_number << std::endl;

	return 0;
}