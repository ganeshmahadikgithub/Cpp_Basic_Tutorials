#pragma once

namespace SPECIFIER
{
	namespace REGISTER
	{
		// NOTE: The `register` storage class specifier is deprecated in C++11 and removed in C++17.
		// It is no longer supported in modern C++ standards.

		// BAD PRACTICE: Attempting to declare a global or static register variable
		// static register int m_register_member; // ERROR: `register` cannot be used with global or static variables

		// BAD PRACTICE: Class demonstrating the use of deprecated `register` specifier
		class CRegisterClassSpecifierBAD final
		{
		public:
			CRegisterClassSpecifierBAD();
			~CRegisterClassSpecifierBAD() = default;

			// BAD: Using `register` in function parameters (deprecated in modern C++)
			int CalculatePower(register int f_number, register int f_power) const;
			char* AppendText(register char* f_text, register char f_char) const;

		private:
			// BAD: Attempting to use `register` for member variables
			// register int m_register_member{ 0 }; // ERROR: `register` is no longer supported in C++17
		};

		// GOOD PRACTICE: Class demonstrating modern C++ practices
		class CRegisterClassSpecifierGOOD final
		{
		public:
			CRegisterClassSpecifierGOOD();
			~CRegisterClassSpecifierGOOD() = default;

			// GOOD: Use meaningful parameter names and const-correctness
			int CalculatePower(int f_number, int f_power) const;

			// GOOD: Use meaningful parameter names and const-correctness
			char* AppendText(char* f_text, char f_char) const;

		private:
			// GOOD: Avoid using deprecated features like `register`
			int m_member_variable{ 0 }; // Properly initialized member variable
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Avoid Deprecated Features**:
   - The `register` storage class specifier is deprecated in C++11 and removed in C++17.
   - Avoid using `register` in modern C++ code.

2. **Use Meaningful Parameter Names**:
   - Use descriptive names for function parameters to improve code readability.
   - Example: `int f_number, int f_power` instead of generic names like `x, y`.

3. **Const-Correctness**:
   - Mark member functions as `const` if they do not modify the object.
   - Example: `int CalculatePower(int f_number, int f_power) const;`

4. **Modern C++ Practices**:
   - Use modern C++ features and avoid outdated or removed features like `register`.

5. **Proper Initialization**:
   - Always initialize member variables to avoid undefined behavior.
   - Example: `int m_member_variable{ 0 };`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Using Deprecated Features**:
   - Avoid using the `register` specifier, as it is no longer supported in modern C++.

2. **Global or Static Register Variables**:
   - `register` cannot be used with global or static variables.

3. **Using `register` for Member Variables**:
   - `register` is not allowed for member variables and is no longer supported in modern C++.

4. **Lack of Comments**:
   - Always document the purpose of functions and variables to improve code maintainability.

5. **Poor Naming Conventions**:
   - Avoid generic or unclear names for variables and parameters.
   - Example: Use `f_number` instead of `x`.
*/