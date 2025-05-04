#include "UsingDeclaration.h"

// GOOD PRACTICE: Encapsulation of logic in member functions
int CUsingDeclaration::GetDataFromConsole()
{
	// GOOD PRACTICE: Using directive to import the entire namespace within a limited scope
	using namespace USING_DECLARATION_A;

	// GOOD PRACTICE: Using declaration to import only the required method from a namespace
	using USING_DECLARATION_B::GetData;

	// Call GetData() from USING_DECLARATION_B
	GetData();

	// Call GetData() from USING_DECLARATION_A explicitly
	return USING_DECLARATION_A::GetData();
}

void CUsingDeclaration::WriteDataFromConsole(std::string& f_data)
{
	// GOOD PRACTICE: Using directive to import the entire namespace within a limited scope
	using namespace USING_DECLARATION_A;

	// GOOD PRACTICE: Using declaration to import only the required method from a namespace
	using USING_DECLARATION_B::DisplayData;

	// Local variable for display
	std::string l_display = "WriteDataFromConsole";

	// Call DisplayData() from USING_DECLARATION_B
	DisplayData(l_display);

	// Call DisplayData() from USING_DECLARATION_A explicitly
	USING_DECLARATION_A::DisplayData(l_display);
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Scoped `using namespace`**:
   - Use `using namespace` within a limited scope (e.g., inside a function) to avoid polluting the global namespace.
   - Example: `using namespace USING_DECLARATION_A;`

2. **Using Declarations**:
   - Use `using` declarations to import only the required parts of a namespace.
   - Example: `using USING_DECLARATION_B::GetData;`

3. **Explicit Namespace Usage**:
   - Use explicit namespace qualifiers when calling methods to avoid ambiguity.
   - Example: `USING_DECLARATION_A::GetData();`

4. **Encapsulation in Member Functions**:
   - Encapsulate logic in member functions to improve modularity and maintainability.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global `using namespace`**:
   - Avoid using `using namespace` at the global scope, as it can lead to name conflicts in larger projects.

2. **Overuse of `using namespace`**:
   - Avoid importing entire namespaces unnecessarily. Use `using` declarations to import only what is needed.

3. **Lack of Comments**:
   - Always document the purpose of namespaces, functions, and variables to improve code readability and maintainability.
*/
