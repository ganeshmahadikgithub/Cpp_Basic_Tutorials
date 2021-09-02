#pragma once

/// <summary>
/// Pritimive or Fundamental data types
/// </summary>
/// <returns></returns>

namespace DATA_TYPES
{
	namespace PRIMITIVE
	{
		//Fundamental or Primitive data types          size in bytes             Range Values
		int     l_int_data{ 8 };                      // 4 bytes             -2,147,483,648 to 2,147,483,647           
		float   l_double_data{ 8.0f };                // 4 bytes             +/-3.4e +/-38(~.  7 digits)  {2.1234567} max 7 digits after decimal point
		double  l_float_data{ 2.0 };                  // 8 bytes             +/-1.7e +/-308(~. 15 digits) {2.123456789012345} max 15 digits after decimal point
		char    l_char_data{ 'a' };                   // 1 bytes             -128 to 127
		wchar_t l_wchar_data{ L'A' };                 // 2/4 bytes           -256 to 255
		bool    l_bool_data{ false };                 // 1 bytes              0 or 1
		void* l_void{ nullptr };                    //nothing

		//Store scientific value in double and float .The number after 'e' repesents power of 10
		float l_float_scientific = 97e4;   //97*10^4
		double l_double_scientific = 97e4;   //97*10^4

		//A variable stodring a 16 bit character code. 0x prefix fr represent decimal and complier will exclude it.
		wchar_t l_wchar_num{ 0x5A };
	}
}

//Predefined data types
//Sized will fixed accordingly compiler architech


