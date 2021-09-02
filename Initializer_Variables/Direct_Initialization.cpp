#include "Direct_Initialization.h"
namespace INITIALIZER
{
    namespace DIRECT
    {
        
        CBaseClass::CBaseClass(const int f_int_data)
            : m_int_data_member(f_int_data)//direct initialized
        {
        }

        CDerivedClass::CDerivedClass(const int f_int_data_member, const char f_char_data)
            : CBaseClass(f_int_data_member)
            , m_char_data_member(f_char_data)//direct initialized
        {
        }
    }
}