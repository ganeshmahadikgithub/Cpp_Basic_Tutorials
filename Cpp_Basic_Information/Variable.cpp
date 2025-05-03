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
        std::cout << "Good Member1: " << m_number1 << std::endl;
        std::cout << "Good Member2: " << m_number2 << std::endl;
        std::cout << "Good Member3: " << m_number3 << std::endl;
    }

    void CVariableGood::SetData(int number1, int number2, int number3)
    {
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
        number1 = n1; // BAD: Poor naming conventions
        number2 = n2;
        number3 = n3;
    }
}