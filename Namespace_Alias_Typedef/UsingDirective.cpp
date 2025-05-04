#include "UsingDirective.h"

/// <summary>
/// Demonstrates the use of `using namespace` directives.
/// </summary>
namespace USING_DIRECTIVE
{
	// GOOD PRACTICE: Use `using namespace` within a limited scope (e.g., inside a namespace or function).
	using namespace UsingNamespaceDirective; // The entire namespace `UsingNamespaceDirective` is imported into `USING_DIRECTIVE`.

	// GOOD PRACTICE: Object of the imported class
	CUsingDirective l_obj;

	// GOOD PRACTICE: Variable defined within the namespace
	int l_int_data{ 0 };
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Scoped `using namespace`**:
   - Use `using namespace` within a limited scope (e.g., inside a namespace or function) to avoid polluting the global namespace.
   - Example: `using namespace UsingNamespaceDirective;`

2. **Encapsulation**:
   - Encapsulate variables and objects within a namespace to avoid global namespace pollution.
   - Example: `namespace USING_DIRECTIVE { ... }`

3. **Clear Documentation**:
   - Document the purpose of `using namespace` directives to improve code readability and maintainability.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global `using namespace`**:
   - Avoid using `using namespace` at the global scope, as it can lead to name conflicts in larger projects.

2. **Lack of Comments**:
   - Always document the purpose of namespaces, variables, and objects to improve code maintainability.

3. **Overuse of `using namespace`**:
   - Avoid importing entire namespaces unnecessarily. Instead, use specific type or function imports if possible.
   - Example: Prefer `using UsingNamespaceDirective::CUsingDirective;` over `using namespace UsingNamespaceDirective;` if only one type is needed.
*/
