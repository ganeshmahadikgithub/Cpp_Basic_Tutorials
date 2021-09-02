#include "UserDefinedDataTypes.h"

namespace USERDEFINED = DATA_TYPES::USER_DEFINED;

USERDEFINED::ClassName::ClassName(const int f_int_data, const char f_char_data, const float f_float_data)
    : m_int_data_member{f_int_data}
    , m_char_data_member{f_char_data}
    , m_float_data_member{f_float_data}
{
}

int USERDEFINED::ClassName::GetIntData() const
{
    return m_int_data_member;
}

char USERDEFINED::ClassName::GetCharData() const
{
    return m_char_data_member;
}

char& USERDEFINED::ClassName::GetCharPtrData()
{
    return m_char_data_member;
}

void USERDEFINED::ClassName::SetIntData(const int f_int_data)
{
    m_int_data_member = f_int_data;
}
