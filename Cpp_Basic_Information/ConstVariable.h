#pragma once
#include <iostream>
using namespace std;

// BAD PRACTICES
// -------------------------------
// 1. Declaring global const variables directly in the global scope
const int m_number{ 100 }; // Global const variable (bad practice)

// 2. Using const for values that could be evaluated at compile time
const int runtime_constant{ 100 }; // Should use constexpr instead

// 3. Misunderstanding const pointers
const int* bad_ptr{ &runtime_constant }; // Value is constant, but pointer can change
// *bad_ptr = 200; // Error: Cannot modify the value

// GOOD PRACTICES
// -------------------------------
// 1. Encapsulate constants in a namespace
namespace Constants
{
    constexpr int CompileTimeConstant = 100; // Compile-time constant (good practice)
    const double Pi = 3.14159;              // Runtime constant
}

// 2. Use constexpr for compile-time constants
constexpr int compile_time_constant{ 100 };

// 3. Use const for runtime constants
const int runtime_constant_good{ 100 };

// 4. Use const pointers correctly
void DemonstrateConstPointers()
{
    const int value = 100;

    // Pointer to a constant value (value cannot be modified, pointer can change)
    const int* ptr_to_const_value = &value;
    std::cout << "Pointer to const value: " << *ptr_to_const_value << std::endl;
	// *ptr_to_const_value = 200; // Error: Cannot modify the value

    // Constant pointer to a value (pointer cannot change, value can be modified)
    int modifiable_value = 200;
    int* const const_ptr_to_value = &modifiable_value;
	*const_ptr_to_value = 300; // Allowed pointer is constant, value can be modified
    std::cout << "Const pointer to value: " << *const_ptr_to_value << std::endl;
	//const_ptr_to_value = nullptr; // Error: Cannot change the pointer

    // Constant pointer to a constant value (neither pointer nor value can change)
    const int* const const_ptr_to_const_value = &value;
    std::cout << "Const pointer to const value: " << *const_ptr_to_const_value << std::endl;
	// *const_ptr_to_const_value = 400; // Error: Cannot modify the value
	// const_ptr_to_const_value = nullptr; // Error: Cannot change the pointer
	
}

// 5. Use const for member functions that do not modify the object
class MyClass
{
public:
    MyClass() = default;
    ~MyClass() = default;

    int GetValue() const // Const member function
    {
        return m_value;
    }

private:
    int m_value{ 100 };
};

// MAIN FUNCTION TO DEMONSTRATE USAGE
int main()
{
    // BAD PRACTICES
    // -------------------------------
    // Using global const variables directly
    std::cout << "Global const variable (bad practice): " << m_number << std::endl;

    // GOOD PRACTICES
    // -------------------------------
    // Access constants through a namespace
    std::cout << "Namespace constant: " << Constants::CompileTimeConstant << std::endl;

    // Use constexpr for compile-time constants
    std::cout << "Compile-time constant: " << compile_time_constant << std::endl;

    // Demonstrate correct usage of const pointers
    DemonstrateConstPointers();

    return 0;
}

/*
Summary:
BAD PRACTICES:
1. Declaring global const variables directly in the global scope.
2. Using const for values that could be evaluated at compile time.
3. Misunderstanding const pointers.

GOOD PRACTICES:
1. Encapsulate constants in namespaces or classes.
2. Use constexpr for compile-time constants.
3. Use const for runtime constants.
4. Use const pointers correctly.
5. Use const for member functions that do not modify the object.
*/