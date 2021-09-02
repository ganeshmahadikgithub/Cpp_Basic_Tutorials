#pragma once
#include <iostream>

using namespace std;

namespace DATA_TYPES
{
	namespace MODIFIERS
	{
		void DisplayModifiers()
		{

			//long modifier , basic data types modified and make
			int l_int_interger{ 2147483649 };//not store prperly
			long int l_long_interger{ 2147483649 };
			long double l_long_double{ 2.12345678901234567 };

			std::cout << "l_int_interger" << l_int_interger << std::endl;          //  -2147483647
			std::cout << "l_long_interger" << l_long_interger << std::endl;        //  2147483649
			std::cout << "l_long_double" << l_long_double << std::endl;            //  2.12345678901234567

			//short  int data type
			int l_int_data{ 32700 };
			short int l_short_data{ 32700 };//short will store upto 32767
			std::cout << "l_int_data" << l_int_data << std::endl;                   //  32700
			std::cout << "l_short_data" << l_short_data << std::endl;               //  32700

			//unsigned modifier used with int and char

			int l_interer{ -10 };
			unsigned int l_unsigned_int{ -10 };
			unsigned char l_unsigned_char = { 'B' };

			std::cout << "interger" << l_interer << std::endl;               //   -10
			std::cout << "unisned interger" << l_unsigned_int << std::endl;  //  4294967286

			//signed modofiers used with int char
			int l_int_data_signed{ -90 };
			signed int l_signed_int_data{ -90 };
			std::cout << "l_int_data_signed" << l_int_data_signed << std::endl;    //   -90
			std::cout << "l_signed_int_data" << l_signed_int_data << std::endl;    //   -90

			char l_char_dta{ 'A' };
			signed char l_signed_char_dta{ 'A' };
			std::cout << "l_char_dta" << l_char_dta << std::endl;                  //   A
			std::cout << "l_signed_char_dta" << l_signed_char_dta << std::endl;    //   A
		}
	}
}
