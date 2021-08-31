#pragma once
#include <iostream>


static int m_global_member { 0 };

class CStatic_Specifiers
{
public:
	CStatic_Specifiers();
	~CStatic_Specifiers() = default;

public:
	static void WriteMemberData();
	void DisplayMemberData();

private:
	static int m_static_member;
	int m_non_static_member;

};

