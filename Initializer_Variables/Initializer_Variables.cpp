// Initializer_Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <functional>
#include "Point.h"
#include "Zero_Initialization.h"
#include "Default_Initialization.h"
#include "Value_Initialied.h"
#include "Copy_Initialization.h"
#include "Direct_Initialization.h"
#include "List_Initializer.h"

using namespace INITIALIZER;

int main()
{
    std::cout << "Initializer initialization of variables ->> start!\n";

    // GOOD PRACTICE: Demonstrating various initialization techniques
    CPoint l_point(10, 10); // Direct initialization
    CPoint l_point1{ 10, 10 }; // Uniform initialization

    l_point.SetCPoints(CPoint{ 1, 2 }); // Copy initialization
    l_point.SetCPoints({ 1, 2 }); // Braced initialization list

    ZERO_INITIALIZATION::CZero_Initialization l_zero_obj{}; // Zero initialization
    DEFAULT::Default_Initialization l_default{}; // Default initialization

    VALUE::Value_Initialied l_value_obj{}; // Value initialization

    COPY::CCopy_Initialization l_copy_object = { 10, '1' }; // Copy initialization
    DIRECT::CBaseClass l_base_obj{ 10 }; // Direct initialization

    LIST::List_InitializeClass l_list_obj{ 10, '2' }; // List initialization

    std::cout << "Initializer initialization of variables ->> end!\n";
    return 0;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Demonstrate Initialization Techniques**:
   - Show examples of zero, default, value, copy, direct, and list initialization.

2. **Encapsulation**:
   - Use classes to encapsulate logic and demonstrate specific initialization techniques.

3. **Clear Documentation**:
   - Document the purpose of each initialization technique to improve code readability.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Lack of Comments**:
   - Always document the purpose of variables and initialization techniques.

2. **Redundant Code**:
   - Avoid duplicating logic unnecessarily.
*/
