#pragma once
#include <iostream>

// GOOD PRACTICE: Encapsulate logic in a reusable function
void swapWithoutUsingThirdVariable(int& nFirst, int& nSecond) {
    // GOOD: Swapping without using a third variable
    nFirst += nSecond;
    nSecond = nFirst - nSecond;
    nFirst = nFirst - nSecond;
}

// GOOD PRACTICE: Encapsulate swapping logic using a third variable
void swapUsingThirdVariable(int& nFirst, int& nSecond) {
    // GOOD: Use a temporary variable for clarity and simplicity
    int temp = nFirst;
    nFirst = nSecond;
    nSecond = temp;
}

int main()
{
    // BAD PRACTICE: Poorly named variables
    int a = 10;
    int b = 20;
    int t; // BAD: Uninitialized variable

    // BAD PRACTICE: Mixing logic and output
    std::cout << "Before swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // BAD PRACTICE: Using an uninitialized variable
    t = a;
    a = b;
    b = t;

    std::cout << "After swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    /* ------------------------------------------------------------ */
    // GOOD PRACTICE: Use meaningful variable names
    int l_number1 { 10 };
    int l_number2 { 20 };

    // GOOD PRACTICE: Add comments for clarity
    std::cout << "Before swapping:" << std::endl;
    std::cout << "l_number1 = " << l_number1 << ", l_number2 = " << l_number2 << std::endl;

    // GOOD PRACTICE: Call the reusable function
    swapUsingThirdVariable(l_number1, l_number2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "l_number1 = " << l_number1 << ", l_number2 = " << l_number2 << std::endl;

    /* ------------------------------------------------------------ */
    // GOOD PRACTICE: Demonstrate swapping without using a third variable
    std::cout << "Before swapping without third variable:" << std::endl;
    std::cout << "l_number1 = " << l_number1 << ", l_number2 = " << l_number2 << std::endl;

    swapWithoutUsingThirdVariable(l_number1, l_number2);

    std::cout << "After swapping without third variable:" << std::endl;
    std::cout << "l_number1 = " << l_number1 << ", l_number2 = " << l_number2 << std::endl;

    return 0;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Properly initialize variables to avoid undefined behavior.
2. Use meaningful and descriptive variable names to improve code readability.
3. Encapsulate logic in reusable functions to promote code reuse and maintainability.
4. Avoid namespace pollution by not using `using namespace std;`.
5. Add comments to clarify the purpose and functionality of the code.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid uninitialized variables, as they can lead to undefined behavior.
2. Do not use poorly named variables, as they reduce code clarity.
3. Avoid mixing logic and output in the same block, as it makes the code harder to maintain.
4. Do not use global variables, as they can lead to unintended side effects and reduce modularity.
*/