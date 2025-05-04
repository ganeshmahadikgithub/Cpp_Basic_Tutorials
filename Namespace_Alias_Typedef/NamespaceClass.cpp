#include "NamespaceClass.h"

// Unnamed namespace global (external linkage) and static (internal linkage)
namespace
{
	int m_global_static_member = { 0 }; // GOOD PRACTICE: Limited to file scope due to unnamed namespace
}

// Alias declared for STUDY::NAMESPACE
namespace NAMEDSPACE = STUDY::NAMESPACE;

// Named namespace defining static member
int NAMEDSPACE::CNamespaceClass::m_global_static_member{ 12 };

//-------------------------------------------------------------------------------------------------
// Constructor for CAnanoumousClass
CAnanoumousClass::CAnanoumousClass(const char f_data)
	: m_char_member{ f_data } // GOOD PRACTICE: Use of initializer list
{
	// GOOD PRACTICE: Encapsulation within an unnamed namespace
}
//-------------------------------------------------------------------------------------------------

// Constructor for CNamespaceClass (single parameter)
NAMEDSPACE::CNamespaceClass::CNamespaceClass(const char f_data)
	: m_char_member{ f_data }
	, m_int_data_member{ 0 } // GOOD PRACTICE: Proper initialization of member variables
{
	// GOOD PRACTICE: Encapsulation within a named namespace
}

// Constructor for CNamespaceClass (two parameters)
STUDY::NAMESPACE::CNamespaceClass::CNamespaceClass(const char f_data, const int f_int_data)
	: m_char_member{ f_data }
	, m_int_data_member{ f_int_data } // GOOD PRACTICE: Proper initialization of member variables
{
}
//-------------------------------------------------------------------------------------------------

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Unnamed Namespaces**:
   - Use unnamed namespaces to limit the scope of variables and classes to the current file.
   - Example: `namespace { int m_global_static_member = { 0 }; }`

2. **Namespace Aliases**:
   - Use namespace aliases to simplify long namespace names and improve code readability.
   - Example: `namespace NAMEDSPACE = STUDY::NAMESPACE;`

3. **Static Members**:
   - Properly define and initialize static members outside the class definition.
   - Example: `int NAMEDSPACE::CNamespaceClass::m_global_static_member{ 12 };`

4. **Encapsulation**:
   - Keep member variables private and initialize them using initializer lists in constructors.
   - Example: `: m_char_member{ f_data }, m_int_data_member{ 0 }`

5. **Clear Documentation**:
   - Document the purpose of namespaces, classes, and variables to improve code readability and maintainability.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Variables**:
   - Avoid global variables unless absolutely necessary. Encapsulate them within namespaces or classes.

2. **Poor Naming Conventions**:
   - Avoid non-descriptive names like `m_global_static_member`. Use meaningful names instead.

3. **Lack of Comments**:
   - Always document the purpose of namespaces, classes, and variables to improve code maintainability.

4. **Redundant Declarations**:
   - Avoid redundant or unused declarations in namespaces or classes.
*/
