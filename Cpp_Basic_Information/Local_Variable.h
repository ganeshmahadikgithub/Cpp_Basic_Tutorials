#pragma once
#include <iostream>


// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

/*
========================
GOOD PRACTICES
========================
1. **Use of Local Variables**:
   - Demonstrates proper use of local variables within their respective scopes.
   - Ensures variables are not unnecessarily exposed outside their intended scope.

2. **Encapsulation of Logic in Functions**:
   - Promotes modularity and reusability by encapsulating logic in functions.

3. **Use of Constants**:
   - Use `constexpr` or `const` for predefined values to improve maintainability.

4. **Avoid Hardcoding**:
   - Avoid hardcoded values by using constants or configurable parameters.
*/

// GOOD PRACTICE: Encapsulation of logic in a function
int CalculateSquare(int number)
{
    // Local variable to store the result
    int square = number * number; // GOOD: Local variable with a clear purpose
    return square; // Return the square of the number
}

// GOOD PRACTICE: Encapsulation of logic in a function
int GetData()
{
    constexpr int predefinedValue = 20; // GOOD: Use of a constant for predefined value
    return predefinedValue;
}

/*
========================
BAD PRACTICES
========================
1. **Poor Variable Naming**:
   - Variable names that are not descriptive or meaningful.

2. **Hardcoded Values**:
   - Using hardcoded values instead of constants or configurable parameters.

3. **Including `main()` in a Header File**:
   - Header files should only contain declarations, not definitions or executable code.
*/

// BAD PRACTICE: Poor variable naming and hardcoded values
int BadFunction()
{
    int x = 42; // BAD: Variable name `x` is not descriptive
    return x;   // BAD: Hardcoded value
}

// BAD PRACTICE: Including `main()` in a header file
int main()
{
    // GOOD PRACTICE: Using a local variable with a meaningful name
    int input = 5;

    // GOOD PRACTICE: Calling a function to encapsulate logic
    int result = CalculateSquare(input);

    // GOOD PRACTICE: Printing the result
    std::cout << "The square of " << input << " is " << result << std::endl;

    // BAD PRACTICE: Using a poorly named variable
    int y = BadFunction();
    std::cout << "Bad function returned: " << y << std::endl;

    return 0;
}

/*
========================
SUMMARY
========================
**GOOD PRACTICES**:
1. **Use of Local Variables**:
   - Properly scoped variables reduce unintended side effects.
   - Example: `int square = number * number;`

2. **Encapsulation of Logic in Functions**:
   - Promotes modularity and reusability.
   - Example: `int CalculateSquare(int number);`

3. **Use of Constants**:
   - Use `constexpr` or `const` for predefined values.
   - Example: `constexpr int predefinedValue = 20;`

4. **Avoid Hardcoding**:
   - Use constants or configurable parameters instead of hardcoded values.
   - Example: `constexpr int predefinedValue = 20;`

**BAD PRACTICES**:
1. **Using `using namespace std;` in a Header File**:
   - Pollutes the global namespace and can lead to name conflicts.
   - Better Practice: Use `std::` explicitly (e.g., `std::cout`).

2. **Poor Variable Naming**:
   - Non-descriptive names like `x` reduce code readability.
   - Better Practice: Use meaningful names like `result` or `input`.

3. **Including `main()` in a Header File**:
   - Header files should only contain declarations, not definitions or executable code.
   - Better Practice: Move the `main()` function to a `.cpp` file.

4. **Hardcoded Values**:
   - Reduces flexibility and maintainability.
   - Better Practice: Use constants or configurable parameters.

5. **Lack of Comments**:
   - Comments should explain the purpose of functions, variables, and logic.
   - Better Practice: Add meaningful comments to improve code readability.
*/
