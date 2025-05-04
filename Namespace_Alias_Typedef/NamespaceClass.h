#pragma once
#include <iostream>

namespace STUDY
{
	namespace NAMESPACE
	{
		// GOOD PRACTICE: Declaration of nested namespaces for better organization
		// Add meaningful declarations or logic here if needed
	}
}

/// <summary>
/// Unnamed namespaces restrict the scope of variables and classes to the current file.
/// </summary>
namespace
{
	// GOOD PRACTICE: Use unnamed namespaces to limit the scope of variables and classes to the file
	int m_gloable_int_member{ 110 }; // BAD PRACTICE: Poor naming convention (should be descriptive)
	static int m_global_static_member; // GOOD PRACTICE: Static variable limited to file scope

	class CAnanoumousClass final
	{
	public:
		// GOOD PRACTICE: Use `explicit` to prevent implicit conversions
		explicit CAnanoumousClass(const char f_char_data);
		~CAnanoumousClass() = default;

	private:
		char m_char_member; // GOOD PRACTICE: Encapsulation of member variables
	};
}

/// <summary>
/// Nested namespaces for better organization and modularity.
/// </summary>
namespace STUDY
{
	namespace NAMESPACE
	{
		// GOOD PRACTICE: Encapsulation of variables within a namespace
		int m_gloable_int_member{ 110 }; // BAD PRACTICE: Poor naming convention (should be descriptive)

		class CNamespaceClass final
		{
		public:
			// GOOD PRACTICE: Use `explicit` to prevent implicit conversions
			explicit CNamespaceClass(const char f_data);
			CNamespaceClass(const char f_data, const int f_int_data);
			~CNamespaceClass() = default;

		private:
			char m_char_member; // GOOD PRACTICE: Encapsulation of member variables
			int m_int_data_member; // GOOD PRACTICE: Encapsulation of member variables
			static int m_global_static_member; // GOOD PRACTICE: Static member shared across all instances
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Unnamed Namespaces**:
   - Use unnamed namespaces to limit the scope of variables and classes to the current file.
   - Example: `namespace { int m_global_static_member; }`

2. **Nested Namespaces**:
   - Use nested namespaces for better organization and modularity.
   - Example: `namespace STUDY { namespace NAMESPACE { ... } }`

3. **Encapsulation**:
   - Keep member variables private and provide controlled access through public methods.
   - Example: `char m_char_member;`

4. **Use of `explicit`**:
   - Use `explicit` for constructors to prevent unintended implicit conversions.
   - Example: `explicit CNamespaceClass(const char f_data);`

5. **Static Members**:
   - Use static members for data shared across all instances of a class.
   - Example: `static int m_global_static_member;`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Poor Naming Conventions**:
   - Avoid non-descriptive names like `m_gloable_int_member`. Use meaningful names instead.

2. **Global Variables**:
   - Avoid global variables unless absolutely necessary. Encapsulate them within namespaces or classes.

3. **Lack of Comments**:
   - Always document the purpose of namespaces, classes, and variables to improve code readability and maintainability.

4. **Redundant Declarations**:
   - Avoid redundant or unused declarations in namespaces or classes.
*/
