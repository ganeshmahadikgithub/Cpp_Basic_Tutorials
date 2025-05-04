#include "MutableSpecifier.h"

namespace SPECIFIER
{
	namespace MUTABLE
	{
		// GOOD PRACTICE: Default Constructor with proper initialization
		CMutableSpecifier::CMutableSpecifier()
			: m_customer_name("")
			, m_table_no(0)
			, m_placed_order("")
			, m_total_bill(0)
		{
			// Constructor body kept minimal
		}

		// GOOD PRACTICE: Parameterized Constructor with clear parameter names
		CMutableSpecifier::CMutableSpecifier(const std::string& f_cust_name, const int f_table_no, const std::string& f_placed_order, const int f_total_bill)
			: m_customer_name(f_cust_name)
			, m_table_no(f_table_no)
			, m_placed_order(f_placed_order)
			, m_total_bill(f_total_bill)
		{
			// Constructor body kept minimal
		}

		// GOOD PRACTICE: Modifies and retrieves the total bill (mutable member)
		int CMutableSpecifier::GetModifyTotalBill(const int f_total_bill) const
		{
			m_total_bill = f_total_bill; // Mutable member modified safely
			return m_total_bill;
		}

		// GOOD PRACTICE: Modifies and retrieves the placed order (mutable member)
		std::string CMutableSpecifier::GetModifyPlacedOrder(const std::string& f_placed_order) const
		{
			m_placed_order = f_placed_order; // Mutable member modified safely
			return m_placed_order;
		}

		// BAD PRACTICE: Arbitrary modification of mutable member without validation
		void CMutableSpecifier::DoSomethingBad(int x)
		{
			m_total_bill += x; // Modifying mutable member without validation
			std::cout << "Bad practice: Arbitrary modification of total bill." << std::endl;
		}

		// BAD PRACTICE: Directly accessing and modifying a public mutable member
		void ModifyPublicMutableOrder(CMutableSpecifier& obj, const std::string& new_order)
		{
			obj.m_bad_public_mutable_order = new_order; // Violates encapsulation
			std::cout << "Bad practice: Direct modification of public mutable member." << std::endl;
		}

		/*
		==========================
		SUMMARY OF GOOD PRACTICES
		==========================
		1. Properly initialize all members in constructors.
		2. Use `mutable` only when necessary and restrict its access to const methods.
		3. Encapsulate mutable members to prevent unintended modifications.
		4. Use clear and descriptive names for variables and functions.

		==========================
		SUMMARY OF BAD PRACTICES
		==========================
		1. Avoid arbitrary modifications of mutable members without validation.
		2. Avoid directly accessing and modifying public mutable members.
		3. Avoid unclear function names and purposes.
		4. Avoid excessive use of `mutable`, as it can lead to unpredictable behavior.
		*/
	}
}
