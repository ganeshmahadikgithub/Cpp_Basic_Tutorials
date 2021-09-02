#pragma once
#include <iostream>

using namespace std;

namespace DATA_TYPES
{
	namespace TYPE_CASTING
	{
		
		// No loss of data from data covert as from 
		// short int --->  int  --->  unsigned int --->  long int --->  unsigned long int --->  float  --->  double  --->  long double
		void ImplicitCastingExamples()
		{
			float l_float_data{ 10.3 };
			int l_int_data{ l_float_data };//implicit convert and value will be 10
			std::cout << "l_int_data:" << l_int_data << std::endl;
			
			//expression 
			unsigned int l_unsigned_data{ 20u };
			signed int l_signed_data{ 10 };
			std::cout << "(l_signed_data-l_unsigned_data):" << l_signed_data - l_unsigned_data << std::endl;
			//here output expected (10-20):-10 but it return 4294967286  , here incorrect output will gives by compiler required casting

		}

		void ExplicitCastingExamples()
		{
			char l_char_data{ 'A'};
			int l_int_data  = (int) l_char_data;//explicit convert and value will be 65
			std::cout << "l_int_data:" << l_int_data << std::endl;

			//expression 
			unsigned int l_unsigned_data{ 20u };
			signed int l_signed_data{ 10 };
			std::cout << "(l_signed_data-l_unsigned_data):" << l_signed_data - static_cast<signed int>(l_unsigned_data) << std::endl;
			//here output expected (10-20):-10 but it return -10
		}
	}

}