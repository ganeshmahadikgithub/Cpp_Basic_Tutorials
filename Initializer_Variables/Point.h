#pragma once
#include<iostream>
#include<initializer_list>

using namespace std;
namespace INITIALIZER
{
	class CPoint final
	{
	public:
		CPoint();
		CPoint(const int f_x, const int f_y);
		~CPoint() = default;

		void SetCPoints(const int f_x, const int f_y);
		void SetCPoints(const std::initializer_list<CPoint> m_list) {};
		void SetCPoints(const CPoint& f_point);

		CPoint GetCPoints() const;
		CPoint GetCPoints1() const;
		CPoint GetCPoints2() const;

	private:
		int m_X;
		int m_Y;
	};
}

