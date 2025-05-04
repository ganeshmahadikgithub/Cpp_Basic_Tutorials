#pragma once
#include <iostream>

// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

namespace INITIALIZER
{
	namespace DIRECT
	{
		// GOOD PRACTICE: Base class demonstrating direct initialization
		class CBaseClass
		{
		public:
			CBaseClass() = default;
			~CBaseClass() = default;
			CBaseClass(const int f_int_data); // Constructor with direct initialization

		private:
			int m_int_data_member{}; // GOOD: Default initialized to 0
		};

		// GOOD PRACTICE: Derived class demonstrating direct initialization
		class CDerivedClass final : public CBaseClass
		{
		public:
			CDerivedClass() = default;
			~CDerivedClass() = default;
			CDerivedClass(const int f_int_data_member, const char f_char_data); // Constructor with direct initialization

		private:
			char m_char_data_member{}; // GOOD: Default initialized to '\0'
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Direct Initialization**:
   - Use initializer lists for efficient and clear initialization of member variables.
   - Example: `CBaseClass(const int f_int_data);`

2. **Encapsulation**:
   - Keep member variables private and initialize them in constructors.

3. **Inheritance Initialization**:
   - Use initializer lists to initialize base class members in derived class constructors.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Namespace Pollution**:
   - Avoid `using namespace std;` in header files, as it can lead to name conflicts.

2. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.
*/