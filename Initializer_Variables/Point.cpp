#include "Point.h"

namespace INITIALIZER
{
	// GOOD PRACTICE: Default constructor with zero initialization
	CPoint::CPoint()
		: m_X(0)
		, m_Y(0)
	{
	}

	// GOOD PRACTICE: Parameterized constructor with explicit initialization
	CPoint::CPoint(const int f_x, const int f_y)
		: m_X(f_x)
		, m_Y(f_y)
	{
	}

	// GOOD PRACTICE: Set points using x and y
	void CPoint::SetCPoints(const int f_x, const int f_y)
	{
		m_X = f_x;
		m_Y = f_y;
	}

	// GOOD PRACTICE: Set points using another CPoint object
	void CPoint::SetCPoints(const CPoint& f_point)
	{
		m_X = f_point.m_X;
		m_Y = f_point.m_Y;
	}

	// GOOD PRACTICE: Return a copy of the current point
	CPoint CPoint::GetCPoints() const
	{
		return CPoint(m_X, m_Y);
	}

	// GOOD PRACTICE: Return a copy using uniform initialization
	CPoint CPoint::GetCPoints1() const
	{
		return { m_X, m_Y };
	}

	// GOOD PRACTICE: Return a copy using brace-enclosed initialization
	CPoint CPoint::GetCPoints2() const
	{
		return CPoint{ m_X, m_Y };
	}
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Explicit Initialization**:
   - Always initialize member variables explicitly in constructors.
   - Example: `: m_X(0), m_Y(0)`

2. **Encapsulation**:
   - Keep member variables private and provide public methods for controlled access.

3. **Overloaded Methods**:
   - Provide multiple ways to set or retrieve data for flexibility.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Redundant Code**:
   - Avoid duplicating logic across methods unnecessarily.

2. **Lack of Comments**:
   - Always document the purpose of methods and variables to improve code readability.
*/