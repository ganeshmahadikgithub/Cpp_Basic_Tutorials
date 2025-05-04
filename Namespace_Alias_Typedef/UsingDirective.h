#pragma once

/// <summary>
/// Demonstrates the use of `using namespace` directives and their impact.
/// </summary>
namespace UsingNamespaceDirective
{
	// GOOD PRACTICE: Encapsulate variables and classes within a namespace to avoid global namespace pollution.
	int m_int_data;

	class CUsingDirective final
	{
	public:
		CUsingDirective() = default;
		~CUsingDirective() = default;

	private:
		char m_char_data; // GOOD: Encapsulation of member variables within a class.
	};
}

// BAD PRACTICE: Using `using namespace` in a header file
// This imports the entire namespace into the global scope, leading to potential name conflicts in larger projects.
// using namespace UsingNamespaceDirective;

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Encapsulation in Namespaces**:
   - Encapsulate variables and classes within a namespace to avoid polluting the global namespace.
   - Example: `namespace UsingNamespaceDirective { ... }`

2. **Avoid `using namespace` in Header Files**:
   - Avoid importing entire namespaces into the global scope in header files, as it can lead to name conflicts.
   - Example: Avoid `using namespace UsingNamespaceDirective;`

3. **Use `using` Directives in Implementation Files**:
   - If necessary, use `using namespace` in `.cpp` files where the scope is limited to the implementation.

4. **Final Classes**:
   - Mark classes as `final` if they are not intended to be inherited.
   - Example: `class CUsingDirective final { ... };`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Using `using namespace` in Header Files**:
   - Avoid importing entire namespaces into the global scope in header files.
   - Example: `using namespace UsingNamespaceDirective;`

2. **Global Namespace Pollution**:
   - Avoid defining variables or classes directly in the global namespace without encapsulation.

3. **Lack of Comments**:
   - Always document the purpose of namespaces, classes, and variables to improve code maintainability.
*/
