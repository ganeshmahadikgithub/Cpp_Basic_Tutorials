#pragma once
#include <iostream>

// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

namespace DATA_TYPES
{
	namespace MODIFIERS
	{
		/// <summary>
		/// Demonstrates the use of data type modifiers in C++.
		/// </summary>
		void DisplayModifiers()
		{
			// GOOD PRACTICE: Use appropriate data types for the range of values.

			// Long modifier: Extends the range of basic data types.
			int l_int_integer{ 2147483647 }; // Maximum value for a 32-bit signed integer
			long int l_long_integer{ 2147483649 }; // Correctly stores values beyond the range of `int`
			long double l_long_double{ 2.12345678901234567 }; // Higher precision for floating-point numbers

			std::cout << "l_int_integer: " << l_int_integer << std::endl;          // Output: 2147483647
			std::cout << "l_long_integer: " << l_long_integer << std::endl;        // Output: 2147483649
			std::cout << "l_long_double: " << l_long_double << std::endl;          // Output: 2.12345678901234567

			// Short modifier: Reduces the range of integers.
			int l_int_data{ 32700 };
			short int l_short_data{ 32700 }; // Maximum value for a 16-bit signed integer is 32767
			std::cout << "l_int_data: " << l_int_data << std::endl;                // Output: 32700
			std::cout << "l_short_data: " << l_short_data << std::endl;            // Output: 32700

			// Unsigned modifier: Only stores non-negative values.
			int l_integer{ -10 };
			unsigned int l_unsigned_int{ 10 }; // GOOD: Unsigned integers should not store negative values
			unsigned char l_unsigned_char{ 'B' };

			std::cout << "l_integer: " << l_integer << std::endl;                  // Output: -10
			std::cout << "l_unsigned_int: " << l_unsigned_int << std::endl;        // Output: 10
			std::cout << "l_unsigned_char: " << l_unsigned_char << std::endl;      // Output: B

			// BAD PRACTICE: Assigning negative values to unsigned types
			unsigned int l_invalid_unsigned_int{ -10 }; // BAD: Negative value assigned to unsigned type
			std::cout << "l_invalid_unsigned_int: " << l_invalid_unsigned_int << std::endl; // Output: Undefined behavior

			// Signed modifier: Explicitly allows negative values.
			int l_int_data_signed{ -90 };
			signed int l_signed_int_data{ -90 };
			std::cout << "l_int_data_signed: " << l_int_data_signed << std::endl;  // Output: -90
			std::cout << "l_signed_int_data: " << l_signed_int_data << std::endl;  // Output: -90

			// Signed and unsigned char types
			char l_char_data{ 'A' };
			signed char l_signed_char_data{ 'A' };
			std::cout << "l_char_data: " << l_char_data << std::endl;              // Output: A
			std::cout << "l_signed_char_data: " << l_signed_char_data << std::endl; // Output: A

			// BAD PRACTICE: Implicit type conversion leading to data loss
			long double l_large_double{ 1.234567890123456789 };
			float l_truncated_float = l_large_double; // Implicit conversion, precision will be lost
			std::cout << "l_truncated_float: " << l_truncated_float << std::endl; // Output: Truncated value
		}
	}
}

/*
==========================
SUMMARY OF GOOD PRACTICES
==========================
1. Use appropriate data types (`long`, `short`, `unsigned`, `signed`) for their intended ranges.
2. Avoid implicit type conversions that may lead to data loss.
3. Add detailed comments to explain the purpose and behavior of each data type modifier.
4. Use `unsigned` types only for non-negative values to avoid undefined behavior.

==========================
SUMMARY OF BAD PRACTICES
==========================
1. Avoid using `using namespace std;` in header files to prevent namespace pollution.
2. Avoid assigning negative values to unsigned types, as it leads to undefined behavior.
3. Avoid implicit type conversions that may result in data loss or unexpected behavior.
4. Avoid relying on default data type ranges without understanding their limitations.
*/