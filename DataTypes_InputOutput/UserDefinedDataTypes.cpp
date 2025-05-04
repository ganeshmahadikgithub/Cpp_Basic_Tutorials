#include "UserDefinedDataTypes.h"

// Namespace alias for convenience
namespace USERDEFINED = DATA_TYPES::USER_DEFINED;

/// <summary>
/// Parameterized Constructor: Initializes the data members with provided values.
/// </summary>
USERDEFINED::ClassName::ClassName(const int f_int_data, const char f_char_data, const float f_float_data)
    : m_int_data_member{ f_int_data }
    , m_char_data_member{ f_char_data }
    , m_float_data_member{ f_float_data }
{
    // GOOD PRACTICE: Constructor body can remain empty as initialization is done in the initializer list.
}

/// <summary>
/// Accessor Method: Returns the integer data member.
/// </summary>
/// <returns>Value of `m_int_data_member`.</returns>
int USERDEFINED::ClassName::GetIntData() const
{
    return m_int_data_member;
}

/// <summary>
/// Accessor Method: Returns the character data member.
/// </summary>
/// <returns>Value of `m_char_data_member`.</returns>
char USERDEFINED::ClassName::GetCharData() const
{
    return m_char_data_member;
}

/// <summary>
/// Accessor Method: Returns a reference to the character data member.
/// </summary>
/// <returns>Reference to `m_char_data_member`.</returns>
char& USERDEFINED::ClassName::GetCharPtrData()
{
    return m_char_data_member;
}

/// <summary>
/// Mutator Method: Sets the integer data member to the provided value.
/// </summary>
/// <param name="f_int_data">New value for `m_int_data_member`.</param>
void USERDEFINED::ClassName::SetIntData(const int f_int_data)
{
    m_int_data_member = f_int_data;
}

/// <summary>
/// Accessor Method: Returns the float data member.
/// </summary>
/// <returns>Value of `m_float_data_member`.</returns>
float USERDEFINED::ClassName::GetFloatData() const
{
    return m_float_data_member;
}

/// <summary>
/// Mutator Method: Sets the float data member to the provided value.
/// </summary>
/// <param name="f_float_data">New value for `m_float_data_member`.</param>
void USERDEFINED::ClassName::SetFloatData(const float f_float_data)
{
    m_float_data_member = f_float_data;
}

/// <summary>
/// BAD PRACTICE: Directly accessing private members without encapsulation.
/// </summary>
void USERDEFINED::ClassName::DirectAccessExample()
{
    // BAD PRACTICE: Directly modifying private members (violates encapsulation).
    m_int_data_member = 100;
    m_char_data_member = 'Z';
    m_float_data_member = 3.14f;

    std::cout << "Directly accessed and modified private members." << std::endl;
}

/// <summary>
/// BAD PRACTICE: Using raw pointers without proper memory management.
/// </summary>
void USERDEFINED::ClassName::RawPointerExample()
{
    int* rawPointer = new int(42); // Dynamically allocated memory
    std::cout << "Raw Pointer Value: " << *rawPointer << std::endl;

    // BAD PRACTICE: Forgetting to delete dynamically allocated memory (causes memory leak).
    // delete rawPointer; // Uncomment to fix the memory leak.
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use an initializer list in constructors to efficiently initialize data members.
2. Encapsulate private members and provide public accessor/mutator methods for controlled access.
3. Use meaningful and consistent parameter names for clarity.
4. Add detailed comments to explain the purpose, parameters, and return values of each method.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid directly accessing or modifying private members; always use accessor/mutator methods.
2. Avoid using raw pointers without proper memory management (e.g., forgetting to delete allocated memory).
3. Avoid skipping comments or documentation, as it reduces code readability and maintainability.
4. Avoid inconsistent naming conventions for parameters and variables.
*/
