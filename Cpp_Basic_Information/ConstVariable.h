#pragma once
#include <iostream>
using namespace std;

const int m_number{ 100 };

//kept f_ptr pointer const because in this method can't change the pointer
void sp_to_dash(const char* f_ptr)
{
	/*  */
}

int main() 
{
	const int l_number{ 100 };
	cout << "Number = " << l_number << endl;
	// Uncommenting the following line will result in a compiler error
	// l_number = 20;

	return 0;
}