// DataTypes_InputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <limits> // For numeric limits

constexpr float PI = 3.14159f;

// GOOD PRACTICE: Demonstrates the use of primitive data types
void DemonstratePrimitiveTypes()
{
    int integerValue = 42;
    float floatValue = 3.14f;
    double doubleValue = 2.718281828459045;
    char charValue = 'A';
    bool boolValue = true;

    std::cout << "Integer Value: " << integerValue << '\n';
    std::cout << "Float Value: " << floatValue << '\n';
    std::cout << "Double Value: " << doubleValue << '\n';
    std::cout << "Char Value: " << charValue << '\n';
    std::cout << "Boolean Value: " << std::boolalpha << boolValue << '\n';
}

// BAD PRACTICE: Demonstrates unsigned integer underflow without proper handling
void DemonstrateUnsignedOverflow()
{
    unsigned int unsignedOverflow = 0;
    unsignedOverflow -= 1; // Causes underflow
    std::cout << "Unsigned Value after underflow: " << unsignedOverflow << '\n';
}

// GOOD PRACTICE: Demonstrates proper error handling for user input
void DemonstrateUserInput()
{
    int userInput;
    while (true)
    {
        std::cout << "Enter an integer: ";
        if (std::cin >> userInput)
        {
            std::cout << "You entered: " << userInput << std::endl;
            break;
        }
        else
        {
            std::cerr << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }
    }
}

// BAD PRACTICE: Demonstrates hardcoding values instead of using constants or variables
void DemonstrateHardcoding()
{
    float radius = 10; // Hardcoded value
    auto area = PI * radius * radius; // Deduces to float
    std::cout << "Area of Circle with radius 10: " << area << std::endl;
}

// GOOD PRACTICE: Demonstrates the use of constants for better maintainability
void DemonstrateConstants()
{
    constexpr int radius = 10; // Use of constant
    auto area = PI * radius * radius; // Deduces to float
    std::cout << "Area of Circle with radius " << radius << ": " << area << std::endl;
}

int main()
{
    std::cout << "Data Types and Input/Output Basics!\n";

    // Demonstrating good and bad practices
    DemonstratePrimitiveTypes();
    DemonstrateUnsignedOverflow();
    DemonstrateUserInput();
    DemonstrateHardcoding();
    DemonstrateConstants();

    return 0;
}

/*
==========================
SUMMARY OF GOOD PRACTICES
==========================
1. Use constants (`constexpr`) for values that do not change to improve maintainability.
2. Handle user input errors gracefully using `std::cin.clear()` and `std::cin.ignore()`.
3. Use appropriate data types for the range of values (e.g., `unsigned` for non-negative values).
4. Add detailed comments to explain the purpose and behavior of each function.

==========================
SUMMARY OF BAD PRACTICES
==========================
1. Avoid hardcoding values; use constants or variables instead.
2. Avoid unsigned integer underflow without proper handling or validation.
3. Avoid skipping error handling for user input, as it can lead to unexpected behavior.
4. Avoid relying on implicit behavior without clear documentation or comments.
*/
