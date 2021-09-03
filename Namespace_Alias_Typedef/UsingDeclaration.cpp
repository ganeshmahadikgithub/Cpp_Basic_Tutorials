#include "UsingDeclaration.h"

int CUsingDeclaration::GetDataFromConsole()
{
	using namespace USING_DECLARATION_A;//entire namespace imported  using directive
	using USING_DECLARATION_B::GetData;//using declaration only GetData() method imported
	GetData();   //called from USING_DECLARATION_B
	
	return USING_DECLARATION_A::GetData(); //called from USING_DECLARATION_A
}

void CUsingDeclaration::WriteDataFromConsole(std::string& f_data)
{
	using namespace USING_DECLARATION_A;//entire namespace imported  using directive
	using USING_DECLARATION_B::DisplayData;//using declaration only DisplayData() method imported
	std::string l_display = "WriteDataFromConsole";
	DisplayData(l_display);//called from USING_DECLARATION_B

	USING_DECLARATION_A::DisplayData(l_display);//called from USING_DECLARATION_A
}
