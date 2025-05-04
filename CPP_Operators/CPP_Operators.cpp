// CPP_Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Assignment.h"
#include "Arithmetic.h"

// Using specific namespaces to avoid polluting the global namespace
using namespace OPERATOR::ASSIGNMENT;
using namespace OPERATOR::ARITHMETIC;

int main()
{
    std::cout << "Operators Demonstration!\n";

    /// <summary>
    /// Assignment Operators
    /// </summary>
    std::cout << "\n--- Assignment Operators ---\n";
    // GOOD PRACTICE: Demonstrates the use of assignment operators
    AssignmentOperatorFun();

    // GOOD PRACTICE: Demonstrates compound assignment operators (e.g., +=, -=, *=, etc.)
    COMPOUND::PerformCompoundAssOperation();

    /// <summary>
    /// Arithmetic Operators
    /// </summary>
    std::cout << "\n--- Arithmetic Operators ---\n";
    // GOOD PRACTICE: Demonstrates good practices for arithmetic operations
    PerformArithmeticGoodOperations();

    // BAD PRACTICE: Demonstrates bad practices for arithmetic operations
    PerformArithmeticBadOperations();

    return 0;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use specific namespaces to avoid polluting the global namespace.
2. Demonstrate the use of assignment operators and compound assignment operators with meaningful examples.
3. Validate arithmetic operations (e.g., division by zero) to prevent runtime errors.
4. Use `constexpr` for compile-time constants to improve performance and ensure immutability.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid using bad practices in arithmetic operations, such as division by zero or unnecessary operations on character types.
2. Avoid hardcoding values (magic numbers) without context, as it reduces code readability and maintainability.
3. Avoid redundant or invalid operations (e.g., modulus on floating-point numbers).
4. Avoid skipping comments or documentation, as it reduces code readability and maintainability.
*/

