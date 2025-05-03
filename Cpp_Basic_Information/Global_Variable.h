#pragma once
#include <iostream>
#include <mutex>

// BAD PRACTICES
// -------------------------------
// 1. Declaring global variables directly in the global scope
int m_memberVariable{ 110 }; // Global variable (bad practice)

// 2. Modifying global variables directly inside functions
int ModifyData()
{
    m_memberVariable = 20; // Modifies global variable directly (bad practice)
    return m_memberVariable;
}

// GOOD PRACTICES
// -------------------------------
// 1. Encapsulate global variables in a namespace
namespace GlobalVariables
{
    int m_number1 = 100; // Encapsulated global variable
    constexpr double Pi = 3.14159; // Compile-time constant (good practice)

    // Function to get the value of the global variable
    int GetData()
    {
        return m_number1;
    }

    // Function to modify the global variable
    void ModifyData(const int value)
    {
        m_number1 = value;
    }

    // 2. Use synchronization mechanisms like std::mutex for thread safety
    std::mutex mtx;

    void ModifyDataThreadSafe()
    {
        std::lock_guard<std::mutex> lock(mtx); // Thread-safe modification
        m_number1 = 20;
    }
}

// MAIN FUNCTION TO DEMONSTRATE USAGE
int main()
{
    // GOOD PRACTICES
    // -------------------------------
    // Access global variables through the namespace
    std::cout << "Initial Value: " << GlobalVariables::GetData() << std::endl;

    GlobalVariables::ModifyData(20);
    std::cout << "Modified Value: " << GlobalVariables::GetData() << std::endl;

    // Using global variable inside a namespace
    std::cout << "Global Variable inside namespace: " << GlobalVariables::m_number1 << std::endl;

    // Thread-safe way to use global variable
    GlobalVariables::ModifyDataThreadSafe();
    std::cout << "Global Variable inside namespace after thread-safe modification: "
        << GlobalVariables::m_number1 << std::endl;

    // BAD PRACTICES
    // -------------------------------
    // Using global variable directly (bad practice)
    std::cout << "Global Variable (bad practice): " << m_memberVariable << std::endl;

    // Modifying global variable directly inside a function (bad practice)
    std::cout << "Global Variable modified inside function (bad practice): " << ModifyData() << std::endl;

    return 0;
}

/*
Summary:
BAD PRACTICES:
1. Declaring global variables directly in the global scope.
2. Modifying global variables directly inside functions.
3. Using global variables without encapsulation.

GOOD PRACTICES:
1. Avoid global variables when possible.
2. Use `constexpr` or `const` for constants.
3. Encapsulate global variables in namespaces or classes.
4. Minimize write access and use thread-safe mechanisms.
5. Document the purpose of global variables.
*/