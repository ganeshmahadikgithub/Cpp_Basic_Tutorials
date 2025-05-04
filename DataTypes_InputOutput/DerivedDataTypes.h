#pragma once
#include <iostream>

namespace DATA_TYPES
{
	namespace DERIVED
	{
		// GOOD PRACTICE: Use meaningful variable names and provide comments for clarity.
		int l_int_data{ 0 }; // Primitive data type

		// Derived Data Types
		int* l_ptr = &l_int_data;          // Pointer: Stores the address of `l_int_data`
		int& l_ref = l_int_data;           // Reference: Alias for `l_int_data`

		char l_name[]{ "ganesh" };         // Array: Stores a sequence of characters (C-style string)

		/// <summary>
		/// Function to return a character array (C-style string).
		/// </summary>
		/// <returns>Pointer to the character array `l_name`.</returns>
		char* GetCharArray()
		{
			return l_name;
		}

		/// <summary>
		/// Demonstrates the use of derived data types.
		/// </summary>
		void DemonstrateDerivedDataTypes()
		{
			// GOOD PRACTICE: Pointer Example
			std::cout << "Pointer Value (Address of l_int_data): " << l_ptr << std::endl;
			std::cout << "Value Pointed by Pointer: " << *l_ptr << std::endl;

			// GOOD PRACTICE: Reference Example
			std::cout << "Reference Value (Alias for l_int_data): " << l_ref << std::endl;

			// GOOD PRACTICE: Array Example
			std::cout << "Array Value (C-style string): " << l_name << std::endl;

			// GOOD PRACTICE: Function Example
			std::cout << "Function Returning Array: " << GetCharArray() << std::endl;

			// BAD PRACTICE: Dereferencing a null pointer
			int* l_null_ptr = nullptr;
			// std::cout << "Dereferencing Null Pointer: " << *l_null_ptr << std::endl; // Uncommenting this will cause a runtime crash

			// BAD PRACTICE: Modifying a constant reference
			const int& l_const_ref = l_int_data;
			// l_const_ref = 10; // Uncommenting this will cause a compilation error

			// BAD PRACTICE: Array out-of-bounds access
			std::cout << "Array Out-of-Bounds Access: " << l_name[10] << std::endl; // Undefined behavior
		}
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use meaningful variable names to improve code readability.
2. Add comments to explain the purpose of variables and functions.
3. Use pointers and references carefully to avoid null pointer dereferencing or unintended modifications.
4. Encapsulate global variables in functions or classes to avoid polluting the global namespace.

========================
SUMMARY OF BAD PRACTICES
========================
1. Dereferencing null pointers can cause runtime crashes.
2. Modifying constant references is not allowed and will result in compilation errors.
3. Accessing array elements out of bounds leads to undefined behavior.
4. Avoid using global variables unless absolutely necessary.
*/
