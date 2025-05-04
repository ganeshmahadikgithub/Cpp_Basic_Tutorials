#pragma once
#include <iostream>
#include <initializer_list>

namespace SPECIFIER
{
	namespace AUTO
	{
		/// <summary>
		/// Demonstrates the use of the `auto` storage class specifier in C++.
		/// This file contains examples of both good and bad coding practices.
		/// </summary>
		class CAutoExamples final
		{
		public:
			// GOOD PRACTICE: Default Constructor and Destructor
			CAutoExamples() = default;
			~CAutoExamples() = default;

			/// <summary>
			/// GOOD PRACTICE: Demonstrates the use of `const auto` variables.
			/// </summary>
			void DefineConstAutoVariable() const;

			/// <summary>
			/// GOOD PRACTICE: Demonstrates the use of `auto` for type deduction.
			/// </summary>
			void DefineAutoVariable() const;

			/// <summary>
			/// GOOD PRACTICE: Demonstrates the use of `auto` with initializer lists.
			/// </summary>
			void InitializerListAutoVariable() const;

			/// <summary>
			/// GOOD PRACTICE: Demonstrates the use of `auto` with expressions.
			/// </summary>
			/// <returns>A float value calculated using an expression.</returns>
			float ExpressionAutoVariable() const;

			/// <summary>
			/// GOOD PRACTICE: Demonstrates the use of `auto` with lambda functions.
			/// </summary>
			void LambdaAutoVariable() const;

			/// <summary>
			/// BAD PRACTICE: Demonstrates misuse of `auto` leading to unclear code.
			/// </summary>
			void MisuseOfAuto() const;

		private:
			// GOOD PRACTICE: Compile-time constant for mathematical calculations
			constexpr static auto PI = 3.3156f;

			// BAD PRACTICE: Overuse of `auto` for private members
			auto m_bad_auto_member = 42; // Type is unclear without context
		};
	}
}

/*
==========================
SUMMARY OF GOOD PRACTICES
==========================
1. Use `auto` for type deduction when the type is obvious from the context.
2. Use `const auto` for variables that should not be modified.
3. Use `auto` with lambda functions and initializer lists for cleaner code.
4. Use `constexpr` for compile-time constants to improve performance.

==========================
SUMMARY OF BAD PRACTICES
==========================
1. Avoid overusing `auto` when it makes the code less readable or unclear.
2. Avoid using `auto` for class members where the type is not immediately obvious.
3. Avoid using `auto` in complex expressions where the deduced type is ambiguous.
4. Avoid relying on `auto` for critical logic where explicit types improve clarity.
*/