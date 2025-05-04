#pragma once
#include <iostream>
#include <mutex>

// BAD PRACTICES
// -------------------------------
// 1. Declaring global variables directly in the global scope
int m_memberVariable{ 110 }; // BAD: Global variable declared in the global scope

// 2. Modifying global variables directly inside functions
int ModifyData()
{
    m_memberVariable = 20; // BAD: Modifies global variable directly
    return m_memberVariable;
}

// GOOD PRACTICES
// -------------------------------
namespace GlobalVariables
{
    // 1. Encapsulate global variables in a namespace
    int m_number1 = 100; // GOOD: Encapsulated global variable
    constexpr double Pi = 3.14159; // GOOD: Compile-time constant

    // 2. Provide controlled access to global variables through functions
    int GetData()
    {
        return m_number1; // GOOD: Controlled access to global variable
    }

    void ModifyData(const int value)
    {
        m_number1 = value; // GOOD: Controlled modification of global variable
    }

    // 3. Use synchronization mechanisms like std::mutex for thread safety
    std::mutex mtx;

    void ModifyDataThreadSafe()
    {
        std::lock_guard<std::mutex> lock(mtx); // GOOD: Thread-safe modification
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
   - Example: int m_memberVariable{ 110 };
2. Modifying global variables directly inside functions.
   - Example: m_memberVariable = 20;
3. Using global variables without encapsulation.

GOOD PRACTICES:
1. Avoid global variables when possible.
2. Use `constexpr` or `const` for constants.
   - Example: constexpr double Pi = 3.14159;
3. Encapsulate global variables in namespaces or classes.
   - Example: namespace GlobalVariables { int m_number1 = 100; }
4. Minimize write access and use thread-safe mechanisms.
   - Example: Use `std::mutex` for thread-safe modifications.
5. Document the purpose of global variables.
*/