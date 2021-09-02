#include "Point.h"

namespace INITIALIZER
{
	CPoint::CPoint()
		: m_X(0)
		, m_Y(0)
	{
	}

	CPoint::CPoint(const int f_x, const int f_y)
		: m_X(f_x)
		, m_Y(f_y)
	{
	}

	void CPoint::SetCPoints(const int f_x, const int f_y)
	{
		m_X = f_x, 
	    m_Y = f_y;
	}

	void CPoint::SetCPoints(const CPoint& f_point)
	{
		m_X = f_point.m_X;
		m_Y = f_point.m_Y;
	}

	CPoint CPoint::GetCPoints() const
	{
		return CPoint(m_X,m_Y);
	}

	CPoint CPoint::GetCPoints1() const
	{
		return {m_X,m_Y};
	}

	CPoint CPoint::GetCPoints2() const
	{
		return CPoint{m_X,m_Y};
	}
}