#pragma once
#include <iostream>

namespace OPERATOR
{
	namespace ASSIGNMENT
	{
		namespace SIMPLE
		{
			/// <summary>
			/// Demonstrates the use of the `=` operator (Assignment Operator).
			/// </summary>
			class CBaseClass
			{
			public:
				// GOOD: Constructor with initializer list for efficient initialization
				CBaseClass() = default;
				CBaseClass(const int n_int_data_member)
					: m_int_data_member{ n_int_data_member }
				{
					// GOOD: Constructor initializes member variable
				}

				~CBaseClass() = default; // GOOD: Default destructor is sufficient.

				// GOOD: Const-correctness ensures this method does not modify the object.
				int GetIntData() const { return m_int_data_member; }

				// GOOD: Assignment operator with descriptive comments
				void AssignmentOperator(const int n_int_data)
				{
					m_int_data_member = n_int_data; // Assigns the value to the member variable
					std::cout << "m_int_data_member: " << m_int_data_member << std::endl;
				}

				// BAD PRACTICE: Overloading assignment operator without proper implementation
				CBaseClass& operator=(const CBaseClass& other)
				{
					// BAD: No self-assignment check or deep copy logic
					m_int_data_member = other.m_int_data_member;
					return *this;
				}

			private:
				// GOOD: Default initialization prevents undefined behavior.
				int m_int_data_member{ 0 };
			};

			// GOOD PRACTICE: Derived class with proper encapsulation and initialization
			class CDerived final : public CBaseClass
			{
			public:
				CDerived() = default;

				// GOOD: Constructor with initializer list for efficient initialization
				CDerived(const int n_int_data_member, const char c_char_data)
					: CBaseClass(n_int_data_member)
					, m_char_data_member{ c_char_data }
				{
					// GOOD: Constructor initializes member variable
				}

				~CDerived() = default;

				// GOOD: Const-correctness ensures this method does not modify the object.
				int GetCharData() const { return static_cast<int>(m_char_data_member); }

				// BAD PRACTICE: Uncommented and unused operator overload
				void operator=(const CDerived& f_rvalue)
				{
					// BAD: No implementation provided
					std::cout << "Assignment operator for CDerived called." << std::endl;
				}

			private:
				// GOOD: Default initialization prevents undefined behavior.
				char m_char_data_member{ 'a' };
			};
		}

		namespace COMPOUND
		{
			/// <summary>
			/// Demonstrates the use of compound assignment operators:
			/// [ += , -= , /= , *= , %= , >>= , <<= , |= , &= , ^= ]
			/// </summary>
			void PerformCompoundAssOperation()
			{
				// GOOD: Variables are initialized before use.
				int l_data = 20, l_data1 = 10;
				int l_bits = 2;

				// GOOD: Compound assignment operators with descriptive comments
				l_data += l_data1; // l_data = l_data + l_data1; l_data = 30
				std::cout << "l_data: " << l_data << std::endl;

				l_data -= l_data1; // l_data = l_data - l_data1; l_data = 20
				std::cout << "l_data: " << l_data << std::endl;

				l_data *= l_data1; // l_data = l_data * l_data1; l_data = 200
				std::cout << "l_data: " << l_data << std::endl;

				l_data1 = 20;

				l_data /= l_data1; // l_data = l_data / l_data1; l_data = 10
				std::cout << "l_data: " << l_data << std::endl;

				l_data <<= l_bits; // l_data = l_data << l_bits; l_data = 40 (left shift by 2 bits)
				std::cout << "l_data: " << l_data << std::endl;

				l_data >>= l_bits; // l_data = l_data >> l_bits; l_data = 10 (right shift by 2 bits)
				std::cout << "l_data: " << l_data << std::endl;

				l_data |= l_bits; // l_data = l_data | l_bits; l_data = 10 (bitwise OR)
				std::cout << "l_data: " << l_data << std::endl;

				l_data ^= l_bits; // l_data = l_data ^ l_bits; l_data = 8 (bitwise XOR)
				std::cout << "l_data: " << l_data << std::endl;
			}
		}

		/// <summary>
		/// Demonstrates the use of assignment operators in a function.
		/// </summary>
		int AssignmentOperatorFun()
		{
			// GOOD: Proper use of constructors and assignment operator
			SIMPLE::CBaseClass l_base(24);
			SIMPLE::CDerived l_derived(24, 'B');

			// BAD PRACTICE: Implicit slicing when assigning derived to base
			l_base = l_derived; // Only the base part of l_derived is assigned to l_base

			// GOOD: Explicit assignment using a method
			l_base.AssignmentOperator(l_derived.GetCharData());

			return 0;
		}
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. Use initializer lists in constructors for efficient initialization.
2. Ensure const-correctness for accessor methods to prevent unintended modifications.
3. Provide meaningful comments for operator overloads and methods.
4. Use default initialization for member variables to prevent undefined behavior.

========================
SUMMARY OF BAD PRACTICES
========================
1. Avoid overloading operators without proper implementation (e.g., self-assignment checks, deep copy logic).
2. Avoid implicit slicing when assigning derived objects to base objects.
3. Avoid uncommented or unused operator overloads, as they reduce code clarity.
4. Avoid skipping comments or documentation, as it reduces code readability and maintainability.
*/
