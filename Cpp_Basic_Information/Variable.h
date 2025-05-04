#pragma once
#include <iostream>

namespace VARIABLE_COMMENTS
{
    // GOOD PRACTICE: Class with proper encapsulation and initialization
    class CVariableGood final // `final` prevents further inheritance
    {
    public:
        CVariableGood();
        ~CVariableGood() = default;

        void ShowData() const; // GOOD: Const-correctness ensures this method does not modify the object
        void SetData(int number1, int number2, int number3); // GOOD: Descriptive parameter names

    private:
        int m_number1{ 0 }; // GOOD: Default initialization
        int m_number2{ 0 }; // GOOD: Default initialization
        int m_number3{ 0 }; // GOOD: Default initialization
    };

    // BAD PRACTICE: Class with poor variable management
    class CVariableBad
    {
    public:
        CVariableBad();
        ~CVariableBad() = default;

        void ShowData() const; // BAD: Accesses uninitialized variables
        void SetData(int, int, int); // BAD: Non-descriptive parameter names

    private:
        int number1; // BAD: No default initialization
        int number2; // BAD: No default initialization
        int number3; // BAD: No default initialization
    };
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Default Initialization**:
   - Always initialize member variables with default values to avoid undefined behavior.
   - Example: `int m_number1{ 0 };`

2. **Encapsulation**:
   - Keep member variables private and provide controlled access through public methods.
   - Example: Use `SetData` and `ShowData` methods to modify and display private members.

3. **Descriptive Naming**:
   - Use meaningful names for variables and parameters to improve code readability.
   - Example: `m_number1`, `number1` instead of `n1`.

4. **Initializer List**:
   - Use initializer lists in constructors for efficient and consistent initialization.
   - Example: `CVariableGood::CVariableGood() : m_number1(10), m_number2(20), m_number3(30) {}`

5. **Const-Correctness**:
   - Mark methods as `const` if they do not modify the object.
   - Example: `void ShowData() const;`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Uninitialized Variables**:
   - Leaving member variables uninitialized can lead to undefined behavior.
   - Example: `int number1;` without initialization.

2. **Poor Naming Conventions**:
   - Using non-descriptive names like `n1`, `n2` reduces code clarity.
   - Example: `SetData(int n1, int n2, int n3)`.

3. **Accessing Uninitialized Variables**:
   - Accessing variables without ensuring they are initialized is a common source of bugs.
   - Example: `std::cout << number1;` when `number1` is uninitialized.

4. **No Encapsulation**:
   - Exposing member variables directly or failing to use accessors violates encapsulation principles.

5. **Hardcoding Values**:
   - Avoid hardcoding values directly in the code; use constants or configurable parameters instead.
*/