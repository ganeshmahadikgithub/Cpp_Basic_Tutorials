#include "Direct_Initialization.h"

namespace DITECT = INITIALIZER::DIRECT;

// GOOD PRACTICE: Constructor with direct initialization
DITECT::CBaseClass::CBaseClass(const int f_int_data)
    : m_int_data_member(f_int_data) // Directly initialized
{
}

// GOOD PRACTICE: Constructor for derived class with direct initialization
DITECT::CDerivedClass::CDerivedClass(const int f_int_data_member, const char f_char_data)
    : DITECT::CBaseClass(f_int_data_member) // Base class initialized directly
    , m_char_data_member(f_char_data)      // Directly initialized
{
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Direct Initialization**:
   - Use initializer lists for efficient and clear initialization of member variables.
   - Example: `: m_int_data_member(f_int_data)`

2. **Encapsulation**:
   - Keep member variables private and initialize them in constructors.

3. **Inheritance Initialization**:
   - Use initializer lists to initialize base class members in derived class constructors.
   - Example: `: DITECT::CBaseClass(f_int_data_member)`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.

2. **Redundant Initialization**:
   - Avoid redundant or unnecessary initialization that can reduce code clarity.
*/