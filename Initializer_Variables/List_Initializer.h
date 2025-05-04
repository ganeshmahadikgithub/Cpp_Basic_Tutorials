#pragma once
#include <iostream>
#include "Point.h"

namespace INITIALIZER
{
    namespace LIST
    {
        // GOOD PRACTICE: Struct demonstrating list initialization
        struct data_t
        {
            int m_int_member{}; // Default initialized to 0
            float m_float_member{}; // Default initialized to 0.0f
            CPoint m_point; // Default initialized using CPoint's default constructor
        };

        // GOOD PRACTICE: Class demonstrating list initialization
        class List_InitializeClass final
        {
        public:
            List_InitializeClass(const int f_data1, const char f_data2);
            ~List_InitializeClass() = default;
            List_InitializeClass();

        private:
            int m_data{}; // Default initialized to 0
            char m_char_data{}; // Default initialized to '\0'
        };

        // GOOD PRACTICE: Consumer class for list initialization
        class List_InitializeConsumer final
        {
        public:
            List_InitializeConsumer() = default;
            void SetClass(List_InitializeClass f_obj) {}
            List_InitializeClass GetListBaseClass();
        };
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
