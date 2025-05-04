#pragma once
#include <iostream>

namespace DATA_TYPES
{
	namespace USER_DEFINED
	{
		/// <summary>
		/// A user-defined class demonstrating encapsulation and user-defined data types.
		/// </summary>
		class ClassName final
		{
		public:
			// GOOD PRACTICE: Default Constructor
			ClassName() = default;

			// GOOD PRACTICE: Parameterized Constructor
			ClassName(const int f_int_data, const char f_char_data, const float f_float_data);

			// GOOD PRACTICE: Default Destructor
			~ClassName() = default;

			// GOOD PRACTICE: Accessor Methods (Getters)
			int GetIntData() const;     // Returns the integer data member
			char GetCharData() const;  // Returns the character data member
			char& GetCharPtrData();    // Returns a reference to the character data member

			// GOOD PRACTICE: Mutator Methods (Setters)
			void SetIntData(const int f_int_data); // Sets the integer data member
			float GetFloatData() const;           // Accessor for float data member
			void SetFloatData(const float f_float_data); // Mutator for float data member

			// BAD PRACTICE: Public data member (violates encapsulation)
			int m_public_data_member;

			// BAD PRACTICE: Unused private data member
		private:
			// GOOD PRACTICE: Fundamental Data Members
			int m_int_data_member{ 0 };    // Integer data member
			float m_float_data_member{ 0.0f }; // Float data member
			char m_char_data_member{ '\0' };   // Character data member

			// BAD PRACTICE: Unused private data member
			int m_unused_data_member;
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use default initialization for private data members to prevent undefined behavior.
2. Encapsulate all data members and provide public accessor/mutator methods for controlled access.
3. Use meaningful and consistent names for methods and data members.
4. Mark the class as `final` to prevent inheritance if it is not intended to be extended.
5. Use `const` for accessor methods to ensure they do not modify the object.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid making data members public, as it violates encapsulation.
2. Avoid leaving unused private data members in the class, as they waste memory and reduce clarity.
3. Avoid skipping comments or documentation, as it reduces code readability and maintainability.
4. Avoid inconsistent naming conventions for parameters and variables.
*/
