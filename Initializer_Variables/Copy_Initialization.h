#pragma once
#include <iostream>

// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

namespace INITIALIZER
{
	namespace COPY
	{
		// GOOD PRACTICE: Class demonstrating copy initialization
		class CCopy_Initialization final
		{
		public:
			CCopy_Initialization() = default; // Default constructor
			~CCopy_Initialization() = default; // Default destructor

			// GOOD PRACTICE: Copy constructor for creating a new object from an existing one
			CCopy_Initialization(const CCopy_Initialization& f_object);

			// GOOD PRACTICE: Parameterized constructor for initializing with specific values
			CCopy_Initialization(const int f_int_data, const char f_char_data);

			// GOOD PRACTICE: Method returning a temporary object
			CCopy_Initialization GetObject(const int f_int_data, const char f_char_data) /*const*/;

			// GOOD PRACTICE: Getter for the integer data member
			int GetIntDataMember() const;

			// GOOD PRACTICE: Setter for the integer data member
			void SetIntDataMember(const int f_data);

		private:
			int m_int_data_member{}; // Default initialized to 0
			char m_char_data_member{}; // Default initialized to '\0'
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Copy Constructor**:
   - Use a copy constructor to create a new object from an existing one.
   - Example: `CCopy_Initialization(const CCopy_Initialization& f_object);`

2. **Parameterized Constructor**:
   - Use parameterized constructors for initializing objects with specific values.
   - Example: `CCopy_Initialization(const int f_int_data, const char f_char_data);`

3. **Encapsulation**:
   - Keep member variables private and provide public methods for controlled access.

4. **Default Initialization**:
   - Use default member initializers to ensure variables are initialized to a known state.
   - Example: `int m_int_data_member{};`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Namespace Pollution**:
   - Avoid `using namespace std;` in header files, as it can lead to name conflicts.

2. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.

3. **Redundant Code**:
   - Avoid duplicating logic unnecessarily.
*/