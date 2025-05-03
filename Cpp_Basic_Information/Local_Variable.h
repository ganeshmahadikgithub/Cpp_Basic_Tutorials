#pragma once
#include <iostream>

// BAD PRACTICE: Using `using namespace std;` in a header file
using namespace std;

/*
Good Practices
1. Use of Local Variables:
   - Demonstrates proper use of local variables within their respective scopes.
   - Ensures variables are not unnecessarily exposed outside their intended scope.
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
    const int predefinedValue = 20; // GOOD: Use of a constant for predefined value
    return predefinedValue;
}

/*
Bad Practices
1. Poor Variable Naming:
   - Variable names that are not descriptive or meaningful.
2. Hardcoded Values:
   - Using hardcoded values instead of constants or configurable parameters.
3. Including `main()` in a header file:
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
Good Coding Practices

1.	Use of Local Variables :
    •	The code demonstrates the proper use of local variables(l_member) within their respective scopes(GetData() and main()).
    •	This ensures that variables are not unnecessarily exposed outside their intended scope, reducing the risk of unintended side effects.
2.	Encapsulation of Logic in Functions :
    •	The GetData() function encapsulates the logic for returning a specific value.This promotes modularity and reusability.
3.	Use of #pragma once :
    •	The inclusion of #pragma once prevents multiple inclusions of the header file, which is a good practice for avoiding redefinition errors.
4.	Consistent Use of std::cout :
    •	The code uses std::cout for output, which is standard and portable.

Bad Coding Practices
1.	Use of using namespace std; :
    •	Including using namespace std; in a header file is considered bad practice because it pollutes the global namespace.This can lead to name conflicts in larger projects.
    •	Better Practice : Use std::explicitly(e.g., std::cout) or limit using namespace to source files(.cpp).
2.	Variable Naming :
    •	The variable name l_member is not descriptive.It does not convey the purpose or meaning of the variable.
    •	Better Practice : Use meaningful names like localValue or dataValue to improve code readability.
3.	Header File Contains main() :
    •	Including the main() function in a header file is a bad practice.Header files are meant for declarations, not definitions or executable code.
    •	Better Practice : Move the main() function to a.cpp file and keep the header file for function declarations.
4.	Hardcoded Values :
    •	The value 20 in GetData() and 40 in main() are hardcoded, which reduces flexibility.
    •	Better Practice : Use constants or configurable parameters to make the code more maintainable.
5.	Lack of Comments :
    •	While there is a single comment(//local member), it does not provide meaningful insight into the purpose of the code.
    •	Better Practice : Add comments to explain the purpose of functions, variables, and logic.
*/
