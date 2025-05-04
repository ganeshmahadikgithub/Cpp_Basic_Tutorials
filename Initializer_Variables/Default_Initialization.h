#pragma once
#include <iostream>

// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

namespace INITIALIZER
{
	namespace DEFAULT
	{
		// GOOD PRACTICE: Class demonstrating default initialization
		class Default_Initialization final
		{
		public:
			Default_Initialization() = default; // Default initialization will call
			~Default_Initialization() = default;

		private:
			int m_data_member{};    // GOOD: Default initialized to 0
			char m_char_data_member{}; // GOOD: Default initialized to '\0'
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Default Initialization**:
   - Use default member initializers to ensure variables are initialized to a known state.
   - Example: `int m_data_member{};`

2. **Encapsulation**:
   - Keep member variables private and initialize them in constructors or with default initializers.

3. **Avoid `using namespace` in Header Files**:
   - Avoid importing entire namespaces in header files to prevent global namespace pollution.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Namespace Pollution**:
   - Avoid `using namespace std;` in header files, as it can lead to name conflicts.

2. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.
*/
