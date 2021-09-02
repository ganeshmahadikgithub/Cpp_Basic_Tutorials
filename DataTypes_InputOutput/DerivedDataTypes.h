#pragma once

namespace DATA_TYPES
{
	namespace DERIVED
	{
		int l_int_data{ 0 };

		//derived data types
		int* l_ptr = &l_int_data;          //pointer
		int& l_ref = l_int_data;           //reference

		char l_name[]{ "ganesh" };         //array

		char* GetCharArray()               //function
		{
			return l_name;
		}
	}
}
