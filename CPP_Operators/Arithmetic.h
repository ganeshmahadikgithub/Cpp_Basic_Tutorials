#pragma once
#include <iostream>

namespace OPERATOR
{
    namespace ARITHMETIC
    {
        // BAD PRACTICES
        // -------------------------------
        void PerformArithmeticBadOperations()
        {
            // 1. Hardcoding Values:
            // Using magic numbers like 20 and 10 without context makes the code less readable and harder to maintain.
            int l_operand_first{ 20 }, l_operand_second{ 10 };

            std::cout << "l_operand_first + l_operand_second :" << l_operand_first + l_operand_second << std::endl;  // Output: 30
            std::cout << "l_operand_first - l_operand_second :" << l_operand_first - l_operand_second << std::endl;  // Output: 10
            std::cout << "l_operand_first * l_operand_second :" << l_operand_first * l_operand_second << std::endl;  // Output: 200

            // 2. No validation for division and modulus operations by zero:
            std::cout << "l_operand_first / l_operand_second :" << l_operand_first / l_operand_second << std::endl;  // Output: 2
            std::cout << "l_operand_first % l_operand_second :" << l_operand_first % l_operand_second << std::endl;  // Output: 0

            float l_float_operand_first{ 20.0f }, l_float_operand_second{ 3.0f };
            std::cout << "l_float_operand_first / l_float_operand_second :" << l_float_operand_first / l_float_operand_second << std::endl;  // Output: 6.66667
            // std::cout << "l_float_operand_first % l_float_operand_second :" << l_float_operand_first % l_float_operand_second << std::endl; // Error: Invalid operation

            // 3. Unnecessary Operations on char Types:
            // Performing arithmetic operations on characters is not meaningful and can confuse readers.
            char l_char_operand_first{ 'n' }, l_char_operand_second{ 'C' };
            std::cout << "l_char_operand_first / l_char_operand_second :" << l_char_operand_first / l_char_operand_second << std::endl; // Output: 1
            std::cout << "l_char_operand_first % l_char_operand_second :" << l_char_operand_first % l_char_operand_second << std::endl; // Output: 0x43
        }

        // GOOD PRACTICES
        // -------------------------------
        /// <summary>
        /// Demonstrates good practices for arithmetic operations.
        /// </summary>
        void PerformArithmeticGoodOperations()
        {
            // 1. Use of constexpr for compile-time constants:
            // Improves performance and ensures immutability.
            constexpr int l_operand_first{ 20 }, l_operand_second{ 10 };

            // 2. Validation for division and modulus operations by zero:
            // Prevents runtime errors.
            if (l_operand_second != 0)
            {
                std::cout << "l_operand_first + l_operand_second :" << l_operand_first + l_operand_second << std::endl; // Output: 30
                std::cout << "l_operand_first - l_operand_second :" << l_operand_first - l_operand_second << std::endl; // Output: 10
                std::cout << "l_operand_first * l_operand_second :" << l_operand_first * l_operand_second << std::endl; // Output: 200
                std::cout << "l_operand_first / l_operand_second :" << l_operand_first / l_operand_second << std::endl; // Output: 2
                std::cout << "l_operand_first % l_operand_second :" << l_operand_first % l_operand_second << std::endl; // Output: 0
            }
            else
            {
                std::cout << "Division or modulus by zero is not allowed." << std::endl;
            }

            // 3. Type Safety:
            // Use explicit type casting when performing operations between different types (e.g., int and float).
            constexpr float l_float_operand_first{ 20.0f }, l_float_operand_second{ 3.0f };
            if (l_float_operand_second != 0.0f)
            {
                std::cout << "l_float_operand_first / l_float_operand_second :"
                    << l_float_operand_first / l_float_operand_second << std::endl; // Output: 6.66667
            }
            else
            {
                std::cout << "Division by zero is not allowed for floating-point numbers." << std::endl;
            }

            // 4. Avoid Arithmetic on char Types:
            // Note: The division and modulus operations on characters may not yield meaningful results.
        }
    }
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use `constexpr` for compile-time constants to improve performance and ensure immutability.
2. Validate division and modulus operations to prevent runtime errors (e.g., division by zero).
3. Use explicit type casting for operations between different types to ensure type safety.
4. Avoid performing arithmetic operations on character types, as they may not yield meaningful results.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid hardcoding values (magic numbers) without context, as it reduces code readability and maintainability.
2. Avoid performing division or modulus operations without validating for zero, as it can cause runtime errors.
3. Avoid unnecessary arithmetic operations on character types, as they can confuse readers and lack meaning.
4. Avoid redundant or invalid operations (e.g., modulus on floating-point numbers).
*/
