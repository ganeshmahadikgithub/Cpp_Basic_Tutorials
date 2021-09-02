#include "Copy_Initialization.h"
namespace INITIALIZER
{
    namespace COPY
    {
        CCopy_Initialization::CCopy_Initialization(const CCopy_Initialization& f_object)
            : m_int_data_member(f_object.m_int_data_member)
            , m_char_data_member(f_object.m_char_data_member)
        {
            //second ways but here it will ceate temp space then copys
            m_int_data_member = f_object.m_int_data_member;
            m_char_data_member = f_object.m_char_data_member;
        }

        CCopy_Initialization::CCopy_Initialization(const int f_int_data, const char f_char_data)
            : m_int_data_member(f_int_data)
            , m_char_data_member{f_char_data}
        {
        }

        CCopy_Initialization CCopy_Initialization::GetObject(const int f_int_data, const char f_char_data) /*const*/
        {
            return { f_int_data, f_char_data };//tempory objct
        }

        int CCopy_Initialization::GetIntDataMember() const
        {
            return m_int_data_member;
        }

        void CCopy_Initialization::SetIntDataMember(const int f_data)
        {
            m_int_data_member = f_data;
        }
    }
}