#pragma once

#include <iostream>

namespace SPECIFIER
{
	namespace STATIC
	{
		// BAD PRACTICE: Global static variable
		// Global static variables can lead to tight coupling and make the code harder to test and maintain.
		static int m_global_member; // If not initialized, it is by default initialized to 0.

		class CStatic_Specifiers final
		{
		public:
			CStatic_Specifiers();
			~CStatic_Specifiers() = default;

			// GOOD PRACTICE: Static member function
			// Static member functions can be called without creating an instance of the class.
			static void WriteMemberData();

			// GOOD PRACTICE: Non-static member function
			// Non-static member functions operate on instance-specific data.
			void DisplayMemberData();

			// GOOD PRACTICE: Demonstrating static local variables
			// Static local variables retain their value across function calls.
			void StaticLocalScopeData(const int f_param);

		private:
			// GOOD PRACTICE: Static member variable
			// Shared across all instances of the class.
			static int m_static_member;

			// GOOD PRACTICE: Non-static member variable
			// Unique to each instance of the class.
			int m_non_static_member;
		};

		// GOOD PRACTICE: Static class example
		// A static class is a class that only contains static members and cannot be instantiated.
		class CStaticUtility final
		{
		public:
			// Deleted constructor to prevent instantiation
			CStaticUtility() = delete;

			// Static utility function
			static void PrintMessage()
			{
				std::cout << "This is a static utility class example." << std::endl;
			}

			// Static utility function to add two numbers
			static int Add(int a, int b)
			{
				return a + b;
			}
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Static Member Functions**:
   - Use static member functions for operations that do not depend on instance-specific data.
   - Example: `static void WriteMemberData();`

2. **Static Member Variables**:
   - Use static member variables for data shared across all instances of a class.
   - Example: `static int m_static_member;`

3. **Static Local Variables**:
   - Use static local variables to retain their value across function calls.
   - Example: `void StaticLocalScopeData(const int f_param);`

4. **Static Classes**:
   - Use static classes for utility functions or constants that do not require instantiation.
   - Example: `class CStaticUtility final { ... };`

5. **Encapsulation**:
   - Keep static member variables private and provide controlled access through static member functions.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Static Variables**:
   - Avoid global static variables, as they can lead to tight coupling and make the code harder to test and maintain.
   - Example: `static int m_global_member;`

2. **Improper Use of Static Variables**:
   - Avoid using static variables for data that should be instance-specific.

3. **Lack of Comments**:
   - Always document the purpose of static variables and functions to improve code maintainability.
*/
