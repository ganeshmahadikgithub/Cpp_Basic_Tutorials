#include "List_Initializer.h"

namespace INITIALIZER
{
    namespace LIST
    {
        // GOOD PRACTICE: Constructor with list initialization
        List_InitializeClass::List_InitializeClass(const int f_data1, const char f_data2)
            : m_data(f_data1)
            , m_char_data(f_data2)
        {
        }

        // GOOD PRACTICE: Default constructor with zero initialization
        List_InitializeClass::List_InitializeClass()
            : m_data(0)
            , m_char_data{}
        {
        }

        // GOOD PRACTICE: Return an object using list initialization
        List_InitializeClass List_InitializeConsumer::GetListBaseClass()
        {
            return List_InitializeClass{ 10, '1' };
        }
    }
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **List Initialization**:
   - Use list initialization for clear and concise initialization of variables and objects.

2. **Encapsulation**:
   - Keep member variables private and initialize them in constructors.

3. **Default Initialization**:
   - Use default member initializers for clarity and maintainability.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.

2. **Redundant Code**:
   - Avoid duplicating logic unnecessarily.
*/
