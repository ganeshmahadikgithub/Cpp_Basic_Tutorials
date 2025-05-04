#pragma once

namespace INITIALIZER
{
	class CPoint; // Forward declaration of CPoint

	namespace ZERO_INITIALIZATION
	{
		// GOOD PRACTICE: Struct with proper zero initialization
		struct data_struct
		{
			// GOOD PRACTICE: Default constructor with zero initialization
			//data_struct()
			//	: m_struct_int_member(0) // Explicitly initialized to 0
			//	, m_struct_char_member{} // Default initialized to '\0'
			//{
			//}

		private:
			int m_struct_int_member;   // GOOD: Explicitly initialized in the constructor
			char m_struct_char_member; // GOOD: Default initialized to '\0'
		};

		// GOOD PRACTICE: Class demonstrating zero initialization
		class CZero_Initialization final
		{
		public:
			// GOOD PRACTICE: Default constructor with zero initialization
			//CZero_Initialization()
			//	: m_int_data_member(0) // Explicitly initialized to 0
			//	, m_float_data_member(0.0f) // Explicitly initialized to 0.0f
			//	, m_cpoint_ptr(nullptr) // Explicitly initialized to nullptr
			//	, m_cpoint_ptr1(nullptr) // Explicitly initialized to nullptr
			//{
			//}

			~CZero_Initialization() = default;

		private:
			int m_int_data_member;       // GOOD: Explicitly initialized in the constructor
			float m_float_data_member;  // GOOD: Explicitly initialized in the constructor
			CPoint* m_cpoint_ptr;       // GOOD: Explicitly initialized to nullptr
			CPoint* m_cpoint_ptr1{ nullptr }; // GOOD: Default member initializer
		};
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Explicit Initialization**:
   - Always explicitly initialize member variables to avoid undefined behavior.
   - Example: `m_int_data_member(0)`

2. **Default Member Initializers**:
   - Use default member initializers for clarity and maintainability.
   - Example: `CPoint* m_cpoint_ptr1{ nullptr };`

3. **Encapsulation**:
   - Keep member variables private and initialize them in constructors.

4. **Default Constructor**:
   - Provide a default constructor to ensure proper initialization of all members.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.
   - Example: `int m_struct_int_member;` without initialization.

2. **Redundant Initialization**:
   - Avoid redundant or unnecessary initialization that can reduce code clarity.

3. **Lack of Comments**:
   - Always document the purpose of member variables and constructors to improve code readability and maintainability.
*/
