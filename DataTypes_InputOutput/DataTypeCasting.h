#pragma once
#include <iostream>

// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

namespace DATA_TYPES
{
	namespace TYPE_CASTING
	{
		
		// No loss of data from data covert as from 
		// short int --->  int  --->  unsigned int --->  long int --->  unsigned long int --->  float  --->  double  --->  long double
		/// <summary>
		/// Demonstrates implicit type casting (conversion).
		/// </summary>
		void ImplicitCastingExamples()
		{
			// GOOD: Implicit casting from float to int
			float l_float_data{ 10.3f };
			int l_int_data{ l_float_data }; // Implicit conversion, value will be truncated to 10
			std::cout << "l_int_data (after implicit casting from float): " << l_int_data << std::endl;

			// BAD: Implicit casting in expressions without proper handling
			unsigned int l_unsigned_data{ 20u };
			signed int l_signed_data{ 10 };
			std::cout << "(l_signed_data - l_unsigned_data): " << l_signed_data - l_unsigned_data << std::endl;
			// Expected output: -10, but due to unsigned arithmetic, the output will be incorrect (e.g., 4294967286).
			// This demonstrates the need for explicit casting in such cases.
		}

		/// <summary>
		/// Demonstrates explicit type casting (conversion).
		/// </summary>
		void ExplicitCastingExamples()
		{
			// GOOD: Explicit casting from char to int
			char l_char_data{ 'A' };
			int l_int_data = static_cast<int>(l_char_data); // Explicit conversion, value will be 65
			std::cout << "l_int_data (after explicit casting from char): " << l_int_data << std::endl;

			// GOOD: Explicit casting in expressions to ensure correct results
			unsigned int l_unsigned_data{ 20u };
			signed int l_signed_data{ 10 };
			std::cout << "(l_signed_data - l_unsigned_data): "
				<< l_signed_data - static_cast<signed int>(l_unsigned_data) << std::endl;
			// Expected output: -10, and the result is correct due to explicit casting.
		}
	}

}

/*
1.	Good Practices:
•	Used static_cast for explicit type conversions to ensure clarity and correctness.
•	Added comments to explain the purpose and behavior of each type casting operation.
•	Highlighted the importance of explicit casting in expressions involving signed and unsigned types.
2.	Bad Practices:
•	Demonstrated the potential issues with implicit casting in expressions, such as incorrect results due to unsigned arithmetic.
•	Highlighted the use of using namespace std; in a header file as a bad practice.
3.	Detailed Comments:
•	Added comments to explain both good and bad practices for type casting.
•	Provided explanations for the expected and actual outputs of each operation.

*/