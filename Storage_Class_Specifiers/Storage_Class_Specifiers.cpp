// Storage_Class_Specifiers.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Static_Specifiers.h"
#include "RegisterClassSpecifier.h"
#include "AutoExamples.h"
#include "MutableSpecifier.h"

// GOOD PRACTICE: Use specific namespaces to avoid polluting the global namespace
using namespace SPECIFIER::STATIC;
using namespace SPECIFIER::REGISTER;
using namespace SPECIFIER::AUTO;
using namespace SPECIFIER::MUTABLE;

int main()
{
    // GOOD PRACTICE: Create an instance of the static specifier class
    CStatic_Specifiers l_static;

    // GOOD PRACTICE: Create an instance of the register specifier class
    CRegisterClassSpecifier l_register;

    // GOOD PRACTICE: Create an instance of the auto examples class
    CAutoExamples l_auto_example;

    // GOOD PRACTICE: Call static and non-static methods of the static specifier class
    l_static.WriteMemberData();
    l_static.DisplayMemberData();
    CStatic_Specifiers::WriteMemberData(); // Static method called without an instance

    // GOOD PRACTICE: Demonstrate static local variable behavior
    l_static.StaticLocalScopeData(10); // l_data = 10
    l_static.StaticLocalScopeData(10); // l_data = 20

    // GOOD PRACTICE: Call methods of the register specifier class
    std::cout << "Power Calculation: " << l_register.CalculatePower(10, 12) << std::endl;

    char l_data[] = "Abc";
    std::cout << "Appended Text: " << l_register.AppendText(l_data, 'b') << std::endl;

    // GOOD PRACTICE: Demonstrate auto specifier usage
    l_auto_example.DefineAutoVariable();
    l_auto_example.DefineConstAutoVAriable();
    auto l_return = l_auto_example.ExpressionAutoVariable();
    std::cout << "Expression Auto Variable Return: " << l_return << std::endl;

    l_auto_example.InitializerListAutoVariable();

    // GOOD PRACTICE: Demonstrate mutable specifier usage
    std::string l_customer_name = { "ABC" };
    std::string l_placed_order = { "PQM" };
    const CMutableSpecifier l_mutable_specifier(l_customer_name, 100, l_placed_order, 100);

    std::cout << "PLACED_ORDER: " << l_mutable_specifier.GetModifyPlacedOrder("XYZ") << std::endl;
    std::cout << "TOTAL_BILL: " << l_mutable_specifier.GetModifyTotalBill(200) << std::endl;

    return 0;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Specific Namespace Usage**:
   - Use specific namespaces to avoid polluting the global namespace.
   - Example: `using namespace SPECIFIER::STATIC;`

2. **Static Methods**:
   - Call static methods without creating an instance of the class.
   - Example: `CStatic_Specifiers::WriteMemberData();`

3. **Static Local Variables**:
   - Demonstrate the behavior of static local variables retaining their value across function calls.
   - Example: `l_static.StaticLocalScopeData(10);`

4. **Encapsulation**:
   - Use classes to encapsulate logic and demonstrate specific storage class specifiers.

5. **Auto Specifier**:
   - Use the `auto` specifier to simplify variable declarations and improve code readability.

6. **Mutable Specifier**:
   - Demonstrate the use of the `mutable` specifier for modifying member variables in const objects.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Namespace Pollution**:
   - Avoid using `using namespace std;` to prevent namespace pollution.

2. **Lack of Comments**:
   - Always document the purpose of functions and variables to improve code maintainability.

3. **Hardcoding Values**:
   - Avoid hardcoding values directly in the code; use constants or configurable parameters instead.
*/