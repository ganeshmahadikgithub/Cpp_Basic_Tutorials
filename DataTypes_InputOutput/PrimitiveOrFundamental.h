#pragma once
#include <iostream>

/// <summary>
/// Primitive or Fundamental Data Types in C++
/// </summary>

namespace DATA_TYPES
{
	namespace PRIMITIVE
	{
		// GOOD PRACTICE: Use meaningful variable names and provide comments for clarity.

		// Integer: 4 bytes, Range: -2,147,483,648 to 2,147,483,647
		int l_int_data{ 8 };

		// Float: 4 bytes, Range: +/-3.4e +/-38 (~7 digits of precision)
		float l_float_data{ 8.0f };

		// Double: 8 bytes, Range: +/-1.7e +/-308 (~15 digits of precision)
		double l_double_data{ 2.0 };

		// Character: 1 byte, Range: -128 to 127 (signed char)
		char l_char_data{ 'a' };

		// Wide Character: 2 or 4 bytes (platform-dependent), Range: -256 to 255
		wchar_t l_wchar_data{ L'A' };

		// Boolean: 1 byte, Values: true (1) or false (0)
		bool l_bool_data{ false };

		// Void Pointer: Represents "nothing" or "no type"
		void* l_void{ nullptr };

		// Scientific Notation: Storing large or small values in float and double
		float l_float_scientific = 97e4;   // 97 * 10^4
		double l_double_scientific = 97e4; // 97 * 10^4

		// Wide Character with Hexadecimal Representation
		wchar_t l_wchar_num{ 0x5A }; // Hexadecimal for 'Z'

		/// <summary>
		/// Demonstrates good and bad practices for primitive data types.
		/// </summary>
		void DemonstratePrimitiveDataTypes()
		{
			// GOOD PRACTICE: Proper usage of primitive data types
			std::cout << "Integer Value: " << l_int_data << std::endl;
			std::cout << "Float Value: " << l_float_data << std::endl;
			std::cout << "Double Value: " << l_double_data << std::endl;
			std::cout << "Character Value: " << l_char_data << std::endl;
			std::cout << "Wide Character Value: " << l_wchar_data << std::endl;
			std::cout << "Boolean Value: " << std::boolalpha << l_bool_data << std::endl;
			std::cout << "Scientific Float Value: " << l_float_scientific << std::endl;
			std::cout << "Scientific Double Value: " << l_double_scientific << std::endl;
			std::cout << "Wide Character Hexadecimal Value: " << l_wchar_num << std::endl;

			// BAD PRACTICE: Implicit type conversion leading to data loss
			int l_large_int = 2147483647; // Maximum value for a 32-bit signed integer
			short l_truncated_short = l_large_int; // Implicit conversion, data will be truncated
			std::cout << "Truncated Short Value: " << l_truncated_short << std::endl;

			// BAD PRACTICE: Using uninitialized variables
			int l_uninitialized_int;
			// std::cout << "Uninitialized Integer Value: " << l_uninitialized_int << std::endl; // Uncommenting this will cause undefined behavior

			// BAD PRACTICE: Assigning out-of-range values to variables
			unsigned char l_invalid_unsigned_char = -1; // Negative value assigned to unsigned type
			std::cout << "Invalid Unsigned Char Value: " << l_invalid_unsigned_char << std::endl;
		}
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use meaningful variable names to improve code readability.
2. Add comments to explain the purpose and behavior of each variable and function.
3. Use appropriate data types for the range of values (e.g., `unsigned` for non-negative values).
4. Avoid implicit type conversions that may lead to data loss.
5. Initialize variables before use to avoid undefined behavior.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid implicit type conversions that may result in data loss or unexpected behavior.
2. Avoid using uninitialized variables, as they can lead to undefined behavior.
3. Avoid assigning out-of-range values to variables, especially for unsigned types.
4. Avoid relying on default behavior without clear documentation or comments.
*/
