#pragma once
#include <iostream>
#include <string>

/// <summary>
/// Demonstrates the use of `using` declarations to import specific parts of a namespace.
/// </summary>

namespace USING_DECLARATION_A
{
	// GOOD PRACTICE: Encapsulation of logic within a namespace
	void DisplayData(std::string& l_data)
	{
		std::cout << "Display USING_DECLARATION_A: " << l_data << std::endl;
	}

	int GetData()
	{
		int l_data{ 0 };
		std::cout << "Enter the digit USING_DECLARATION_A: ";
		std::cin >> l_data;
		return l_data;
	}
}

namespace USING_DECLARATION_B
{
	// GOOD PRACTICE: Encapsulation of logic within a namespace
	void DisplayData(std::string& l_data)
	{
		std::cout << "Display USING_DECLARATION_B: " << l_data << std::endl;
	}

	int GetData()
	{
		int l_data{ 0 };
		std::cout << "Enter the digit USING_DECLARATION_B: ";
		std::cin >> l_data;
		return l_data;
	}
}

// GOOD PRACTICE: Class demonstrating the use of `using` declarations
class CUsingDeclaration final
{
public:
	CUsingDeclaration() = default;
	~CUsingDeclaration() = default;

	// GOOD PRACTICE: Encapsulation of logic in member functions
	int GetDataFromConsole();
	void WriteDataFromConsole(std::string& f_data);

private:
	char m_char_data; // GOOD: Encapsulation of member variables
};

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Encapsulation in Namespaces**:
   - Encapsulate logic within namespaces to avoid polluting the global namespace.
   - Example: `namespace USING_DECLARATION_A { ... }`

2. **Using Declarations**:
   - Use `using` declarations to import specific parts of a namespace instead of the entire namespace.
   - Example: `using USING_DECLARATION_A::DisplayData;`

3. **Encapsulation in Classes**:
   - Use classes to encapsulate logic and provide a clear structure for related functionality.

4. **Clear Documentation**:
   - Document the purpose of namespaces, classes, and functions to improve code readability and maintainability.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Using Entire Namespaces**:
   - Avoid importing entire namespaces using `using namespace`, as it can lead to name conflicts.
   - Example: Avoid `using namespace USING_DECLARATION_A;`

2. **Global Namespace Pollution**:
   - Avoid defining variables or functions directly in the global namespace without encapsulation.

3. **Lack of Comments**:
   - Always document the purpose of namespaces, classes, and functions to improve code maintainability.

4. **Redundant Logic**:
   - Avoid duplicating logic across namespaces unless necessary. Consider reusing shared functionality.
*/