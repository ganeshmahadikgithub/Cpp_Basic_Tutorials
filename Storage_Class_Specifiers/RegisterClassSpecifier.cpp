#include "RegisterClassSpecifier.h"

// BAD PRACTICE: Constructor with an empty body as no initialization is required
SPECIFIER::REGISTER::CRegisterClassSpecifierBAD::CRegisterClassSpecifierBAD()
{
}

// BAD PRACTICE: Using the deprecated `register` keyword in function parameters and local variables
int SPECIFIER::REGISTER::CRegisterClassSpecifierBAD::CalculatePower(register int f_number, register int f_power) const
{
    // BAD: Using `register` for local variables (deprecated in modern C++)
    register int l_temp = 1;
    for (; f_number; --f_number)
    {
        l_temp = l_temp * f_power; // BAD: Inefficient loop logic
    }

    return l_temp;
}

// BAD PRACTICE: Using the deprecated `register` keyword in function parameters and local variables
char* SPECIFIER::REGISTER::CRegisterClassSpecifierBAD::AppendText(register char* f_text, register char f_char) const
{
    if (!f_text)
    {
        return nullptr; // GOOD: Proper null pointer check
    }

    // BAD: Using `register` for local variables (deprecated in modern C++)
    register char* l_temp = f_text;
    *l_temp = *l_temp + f_char; // BAD: Modifying the pointer's value without clear intent
    return l_temp;
}

// GOOD PRACTICE: Constructor with an empty body as no initialization is required
SPECIFIER::REGISTER::CRegisterClassSpecifierGOOD::CRegisterClassSpecifierGOOD()
{
}

// GOOD PRACTICE: Calculate power using modern C++ practices
int SPECIFIER::REGISTER::CRegisterClassSpecifierGOOD::CalculatePower(int f_number, int f_power) const
{
    int result = 1;
    for (int i = 0; i < f_number; ++i)
    {
        result *= f_power; // GOOD: Clear and efficient loop logic
    }
    return result;
}

// GOOD PRACTICE: Append a character to a string using modern C++ practices
char* SPECIFIER::REGISTER::CRegisterClassSpecifierGOOD::AppendText(char* f_text, char f_char) const
{
    if (!f_text)
    {
        return nullptr; // GOOD: Proper null pointer check
    }

    char* l_temp = f_text;
    while (*l_temp != '\0') // GOOD: Traverse to the end of the string
    {
        ++l_temp;
    }
    *l_temp = f_char; // Append the character
    *(l_temp + 1) = '\0'; // Null-terminate the string
    return f_text;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Constructor Design**:
   - Use an empty constructor body if no initialization is required.

2. **Null Pointer Checks**:
   - Always check for null pointers before dereferencing them to avoid runtime errors.

3. **Code Readability**:
   - Use meaningful variable names and avoid unnecessary complexity.

4. **Efficient Loops**:
   - Use clear and efficient loop logic to improve performance and maintainability.

5. **Modern C++ Practices**:
   - Avoid deprecated features like `register` and use modern C++ features for better portability and clarity.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Using Deprecated Features**:
   - Avoid using the `register` keyword, as it is deprecated in C++11 and removed in C++17.

2. **Unclear Pointer Modifications**:
   - Avoid modifying pointers or their values without clear intent or documentation.

3. **Inefficient Loops**:
   - Avoid inefficient loop logic that can reduce performance.

4. **Lack of Comments**:
   - Always document the purpose of functions and variables to improve code maintainability.
*/