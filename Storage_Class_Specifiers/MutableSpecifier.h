#pragma once
#include <string>
#include <iostream>

namespace SPECIFIER
{
	namespace MUTABLE
	{
		/// <summary>
		/// Demonstrates the use of the `mutable` storage class specifier in C++.
		/// This file contains examples of both good and bad coding practices.
		/// </summary>
		class CMutableSpecifier final
		{
		public:
			// GOOD PRACTICE: Default Constructor with proper initialization
			CMutableSpecifier()
				: m_customer_name("Unknown"), m_table_no(0), m_placed_order("None"), m_total_bill(0)
			{
				// Constructor body kept minimal
			}

			// GOOD PRACTICE: Parameterized Constructor with clear parameter names
			CMutableSpecifier(const std::string& f_cust_name, const int f_table_no, const std::string& f_placed_order, const int f_total_bill)
				: m_customer_name(f_cust_name), m_table_no(f_table_no), m_placed_order(f_placed_order), m_total_bill(f_total_bill)
			{
				// Constructor body kept minimal
			}

			// GOOD PRACTICE: Default Destructor
			~CMutableSpecifier() = default;

			/// <summary>
			/// GOOD PRACTICE: Modifies and retrieves the placed order (mutable member).
			/// </summary>
			/// <returns>The updated placed order.</returns>
			std::string GetModifyPlacedOrder(const std::string& f_placed_order) const
			{
				m_placed_order = f_placed_order; // Mutable member modified safely
				return m_placed_order;
			}

			/// <summary>
			/// GOOD PRACTICE: Modifies and retrieves the total bill (mutable member).
			/// </summary>
			/// <returns>The updated total bill.</returns>
			int GetModifyTotalBill(const int f_total_bill) const
			{
				m_total_bill = f_total_bill; // Mutable member modified safely
				return m_total_bill;
			}

			// BAD PRACTICE: Public mutable member (violates encapsulation)
			mutable std::string m_bad_public_mutable_order;

			// BAD PRACTICE: Function with unclear purpose and poor naming
			void DoSomethingBad(int x)
			{
				// Arbitrary modification of mutable member without clear intent
				m_total_bill += x; // Modifying mutable member without validation
				std::cout << "Bad practice: Arbitrary modification of total bill." << std::endl;
			}

		private:
			// GOOD PRACTICE: Non-mutable data members with clear purpose
			std::string m_customer_name; // Customer's name
			int m_table_no;              // Table number

			// GOOD PRACTICE: Mutable data members with restricted access
			mutable std::string m_placed_order; // Placed order (modifiable in const methods)
			mutable int m_total_bill;           // Total bill (modifiable in const methods)
		};

		/*
		==========================
		SUMMARY OF GOOD PRACTICES
		==========================
		1. Use `mutable` only when necessary and restrict its access to const methods.
		2. Properly initialize all members in constructors.
		3. Use clear and descriptive names for variables and functions.
		4. Encapsulate mutable members to prevent unintended modifications.

		==========================
		SUMMARY OF BAD PRACTICES
		==========================
		1. Avoid making mutable members public, as it violates encapsulation.
		2. Avoid arbitrary modifications of mutable members without validation.
		3. Avoid unclear function names and purposes.
		4. Avoid excessive use of `mutable`, as it can lead to unpredictable behavior.
		*/
	}
}
