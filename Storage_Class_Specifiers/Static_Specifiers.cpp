#include "Static_Specifiers.h"

// GOOD PRACTICE: Proper initialization of static member variables
int SPECIFIER::STATIC::CStatic_Specifiers::m_static_member = 100;

// BAD PRACTICE: Global static variable redefined as extern
// Global static variables can lead to tight coupling and make the code harder to maintain.
extern int SPECIFIER::STATIC::m_global_member = 100;

SPECIFIER::STATIC::CStatic_Specifiers::CStatic_Specifiers()
	: m_non_static_member(0) // GOOD: Proper initialization of non-static member variables
{
}

// GOOD PRACTICE: Static method modifying static members
// Static methods can only access static members of the class.
void SPECIFIER::STATIC::CStatic_Specifiers::WriteMemberData()
{
	m_static_member = 200; // GOOD: Modifying static member variable

	// BAD PRACTICE: Attempting to access non-static members in a static method
	// m_non_static_member = 20; // ERROR: Non-static members cannot be accessed in a static method

	SPECIFIER::STATIC::m_global_member = 40; // GOOD: Modifying global static variable
}

// GOOD PRACTICE: Non-static method accessing both static and non-static members
void SPECIFIER::STATIC::CStatic_Specifiers::DisplayMemberData()
{
	m_static_member = 150; // GOOD: Modifying static member variable
	m_non_static_member = 20; // GOOD: Modifying non-static member variable

	std::cout << "m_static_member: " << m_static_member << std::endl;
	std::cout << "m_non_static_member: " << m_non_static_member << std::endl;

	SPECIFIER::STATIC::m_global_member = 20; // GOOD: Modifying global static variable
	std::cout << "m_global_member: " << SPECIFIER::STATIC::m_global_member << std::endl;
}

// GOOD PRACTICE: Demonstrating static local variables
void SPECIFIER::STATIC::CStatic_Specifiers::StaticLocalScopeData(const int f_param)
{
	static int l_data = 0; // GOOD: Static local variable retains its value across function calls
	l_data += f_param;
	std::cout << "l_data: " << l_data << std::endl;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Static Member Initialization**:
   - Properly initialize static member variables outside the class definition.
   - Example: `int SPECIFIER::STATIC::CStatic_Specifiers::m_static_member = 100;`

2. **Static Methods**:
   - Use static methods to modify static members of the class.
   - Example: `void WriteMemberData();`

3. **Static Local Variables**:
   - Use static local variables to retain their value across function calls.
   - Example: `static int l_data = 0;`

4. **Encapsulation**:
   - Keep static members private and provide controlled access through static methods.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Static Variables**:
   - Avoid global static variables, as they can lead to tight coupling and make the code harder to maintain.
   - Example: `extern int SPECIFIER::STATIC::m_global_member = 100;`

2. **Accessing Non-Static Members in Static Methods**:
   - Static methods cannot access non-static members of the class.
   - Example: `m_non_static_member = 20; // ERROR`

3. **Improper Use of Static Variables**:
   - Avoid using static variables for data that should be instance-specific.

4. **Lack of Comments**:
   - Always document the purpose of static variables and methods to improve code maintainability.
*/
