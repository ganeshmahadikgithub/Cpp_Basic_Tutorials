#include "Copy_Initialization.h"

namespace INITIALIZER
{
    namespace COPY
    {
        // GOOD PRACTICE: Copy constructor with explicit member initialization
        CCopy_Initialization::CCopy_Initialization(const CCopy_Initialization& f_object)
            : m_int_data_member(f_object.m_int_data_member)
            , m_char_data_member(f_object.m_char_data_member)
        {
            // BAD PRACTICE: Redundant assignment after initialization
            m_int_data_member = f_object.m_int_data_member;
            m_char_data_member = f_object.m_char_data_member;
        }

        // GOOD PRACTICE: Parameterized constructor with explicit member initialization
        CCopy_Initialization::CCopy_Initialization(const int f_int_data, const char f_char_data)
            : m_int_data_member(f_int_data)
            , m_char_data_member( f_char_data )
        {
        }

        // GOOD PRACTICE: Method returning a temporary object
        CCopy_Initialization CCopy_Initialization::GetObject(const int f_int_data, const char f_char_data) /*const*/
        {
            return { f_int_data, f_char_data }; // Temporary object created and returned
        }

        // GOOD PRACTICE: Getter for the integer data member
        int CCopy_Initialization::GetIntDataMember() const
        {
            return m_int_data_member;
        }

        // GOOD PRACTICE: Setter for the integer data member
        void CCopy_Initialization::SetIntDataMember(const int f_data)
        {
            m_int_data_member = f_data;
        }
    }
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Copy Constructor**:
   - Use a copy constructor to create a new object from an existing one.
   - Example: `CCopy_Initialization(const CCopy_Initialization& f_object);`

2. **Parameterized Constructor**:
   - Use parameterized constructors for initializing objects with specific values.
   - Example: `CCopy_Initialization(const int f_int_data, const char f_char_data);`

3. **Encapsulation**:
   - Keep member variables private and provide public methods for controlled access.

4. **Temporary Object Creation**:
   - Use methods to return temporary objects for flexibility and reusability.
   - Example: `return { f_int_data, f_char_data };`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Redundant Code**:
   - Avoid duplicating logic unnecessarily, such as reassigning values already initialized in the constructor.

2. **Lack of Comments**:
   - Always document the purpose of methods and variables to improve code readability.

3. **Unnecessary Complexity**:
   - Avoid adding unnecessary complexity to constructors or methods.
*/