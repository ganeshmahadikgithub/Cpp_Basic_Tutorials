#include "Variable.h"

namespace VARIABLE_COMMENTS
{
    // GOOD PRACTICE: Proper initialization and encapsulation
    CVariableGood::CVariableGood()
        : m_number1(10), m_number2(20), m_number3(30) // GOOD: Initialization in initializer list
    {
        // Constructor body left empty as all members are initialized
    }

    void CVariableGood::ShowData() const
    {
        // GOOD: Accessing properly initialized variables
        std::cout << "Good Member1: " << m_number1 << std::endl;
        std::cout << "Good Member2: " << m_number2 << std::endl;
        std::cout << "Good Member3: " << m_number3 << std::endl;
    }

    void CVariableGood::SetData(int number1, int number2, int number3)
    {
        // GOOD: Descriptive parameter names and proper assignment
        m_number1 = number1;
        m_number2 = number2;
        m_number3 = number3;
    }

    // BAD PRACTICE: Poor variable management
    CVariableBad::CVariableBad()
    {
        // BAD: No initialization in constructor
    }

    void CVariableBad::ShowData() const
    {
        // BAD: Accessing uninitialized variables
        std::cout << "Bad Member1: " << number1 << std::endl;
        std::cout << "Bad Member2: " << number2 << std::endl;
        std::cout << "Bad Member3: " << number3 << std::endl;
    }

    void CVariableBad::SetData(int n1, int n2, int n3) // BAD: Non-descriptive parameter names
    {
        // BAD: Poor naming conventions and lack of clarity
        number1 = n1;
        number2 = n2;
        number3 = n3;
    }
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use initializer lists in constructors to ensure proper initialization of member variables.
2. Use descriptive and meaningful parameter names to improve code readability and maintainability.
3. Ensure all member variables are initialized before use to prevent undefined behavior.
4. Encapsulate member variables and provide public methods for controlled access.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid leaving member variables uninitialized, as it can lead to undefined behavior.
2. Avoid using non-descriptive parameter names, as it reduces code clarity.
3. Avoid poor naming conventions for member variables, as it makes the code harder to understand.
4. Avoid accessing uninitialized variables, as it can cause runtime errors or unexpected behavior.
*/