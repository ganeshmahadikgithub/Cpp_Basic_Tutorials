#pragma once
#include <iostream>
#include <initializer_list>

// BAD PRACTICE: Using `using namespace std;` in a header file
// This pollutes the global namespace and can lead to name conflicts in larger projects.
using namespace std;

namespace INITIALIZER
{
	// GOOD PRACTICE: Class demonstrating proper encapsulation and initialization
	class CPoint final
	{
	public:
		CPoint(); // Default constructor
		CPoint(const int f_x, const int f_y); // Parameterized constructor
		~CPoint() = default;

		void SetCPoints(const int f_x, const int f_y); // Set points using x and y
		void SetCPoints(const std::initializer_list<CPoint> m_list) {}; // Set points using initializer list
		void SetCPoints(const CPoint& f_point); // Set points using another CPoint object

		CPoint GetCPoints() const;  // Return a copy of the current point
		CPoint GetCPoints1() const; // Return a copy using uniform initialization
		CPoint GetCPoints2() const; // Return a copy using brace-enclosed initialization

	private:
		int m_X{}; // GOOD: Default initialized to 0
		int m_Y{}; // GOOD: Default initialized to 0
	};
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Default Initialization**:
   - Use default member initializers to ensure variables are initialized to a known state.
   - Example: `int m_X{};`

2. **Encapsulation**:
   - Keep member variables private and provide public methods for controlled access.

3. **Overloaded Methods**:
   - Provide multiple ways to set or retrieve data for flexibility.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Namespace Pollution**:
   - Avoid `using namespace std;` in header files, as it can lead to name conflicts.

2. **Unnecessary Methods**:
   - Avoid adding methods that are not used or do not add value.
*/
