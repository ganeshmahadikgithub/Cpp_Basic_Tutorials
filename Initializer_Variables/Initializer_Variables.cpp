// Initializer_Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>
#include "Point.h"
#include "Zero_Initialization.h"
#include "Default_Initialization.h"
#include "Value_Initialied.h"
#include "Copy_Initialization.h"
#include "Direct_Initialization.h"
#include "List_Initializer.h"

using namespace INITIALIZER;

struct MyStruct
{
    int m_int_data_member;
    char m_char_data_member;
};

union MyUnion
{
    int m_int_data_member;
    char m_char_data_member;
    bool m_bool_flag;
    MyStruct m_struct;
};

int main()
{
    std::cout << "Initializer initialization of variable at initial value ->>start!\n";

    // initializer with normal variable initialization
    CPoint l_point(10, 10);
    CPoint l_point1{ 10, 10 };

    //pas paramter to function as initializer
    l_point.SetCPoints(CPoint{ 1,2 });//copy 
    l_point.SetCPoints({ 1,2 });// braced initialization list std::initialazation_list<CPoint> 
    l_point.SetCPoints({});// empty passed to braced initialization list std::initialazation_list<CPoint> 
    l_point.SetCPoints({ {1,2},{3,4} });// braced initialization list std::initialazation_list<CPoint> 

    std::cout << "Initializer initialization of variable at initial value ->>end!\n";

    /// <summary>
    /// 1) Zero Initialization [Initial value of variable]
    /// </summary>
    /// <returns></returns>

    ZERO_INITIALIZATION::CZero_Initialization l_zero_obj{};//initialized all member to zero
    ZERO_INITIALIZATION::data_struct l_struct{};//m_struct_int_member = 0,m_struct_char_member ='\0'
    char l_charArray[3]{ '1','2' };//third char initialized with zero
    int* l_ptr{};//initialized with zero
    static float f1 = 0.0;
    double l_dounle{};//zero initialized to 0.0f

    /// <summary>
    /// 2) Default Initialization [Default constructor]
    /// </summary>
    /// <returns></returns>

    DEFAULT::Default_Initialization l_default{};//default constructor will called
    auto l_default_ptr = new DEFAULT::Default_Initialization();//default constructor will called

    //const DEFAULT::Default_Initialization l_default_const;//error
    const DEFAULT::Default_Initialization l_default_const{};

    /// <summary>
    /// 2) Default Initialization of Static Variables and Objects
    /// </summary>
    /// <returns></returns>

    static int l_int_data{};//it will autoatic initialized with zero  
    static char l_char_data{};//it will autoatic initialized with '\0' 
    static DEFAULT::Default_Initialization l_default_static{}; //{0,'\0'}


    /// <summary>
    /// 4) Value Initalization [zero , Default initialization] and tmpory object passed o function ({})
    /// </summary>
    /// <returns></returns>

    VALUE::Value_Initialied l_value_obj{};//default initialization(defaut constructor calld) and zero initialization for data member.
    auto l_value_obj_ptr = new VALUE::Value_Initialied{};//default initialization(defaut constructor calld) and zero initialization for data member.

    int l_array_ele[3]{};  //all index initialized with zero (zero initialization)
    float l_flaot{};//0.0f


    /// <summary>
    /// 4) Copy Initalization [=,initialized one object from another object value,
    /// object return from function,parameter passed to funcion]
    /// </summary>
    /// <returns></returns>

    COPY::CCopy_Initialization l_copy_object = { 10,'1' };//copy initilization of l_copy_object from {}
    COPY::CCopy_Initialization l_copy_obj = { };//copy initilization of l_copy_obj from {}
    COPY::CCopy_Initialization l_copy_object1 = l_copy_object;//copy constructor will called
    auto l_obj = l_copy_object1.GetObject(10, '2');//copy initilization of l_obj from return value of function
    l_copy_object1.SetIntDataMember(12);//copy initilization of parameter
    int l_copy_member = 10; // copy initilization of l_copy_member

    /// <summary>
    /// 4) Direct Initalization [=,initialized one object from another object value,
    /// object return from function,parameter passed to funcion] with non empty braces or parenthisis
    /// </summary>
    /// <returns></returns>

    std::function<int()> f_function = [l_copy_member]() {return l_copy_member + 1; };//direct initialization with lambda
    DIRECT::CBaseClass l_base_obj{ 10 };//direct initialize base class member
    DIRECT::CDerivedClass l_derived_obj{ 12,'c' };//direct initialize derivd class member
    DIRECT::CBaseClass l_base1 = static_cast<DIRECT::CBaseClass>(l_base_obj);

   /// <summary>
  /// 4) lIST Initalization [{} INITIALIZED LIST]
  /// </summary>
  /// <returns></returns>

    LIST::List_InitializeClass l_list_obj{ 10,'2' };//list initialized list
    LIST::List_InitializeClass* l_list_ptr = new LIST::List_InitializeClass{ 2,'3' };

    LIST::List_InitializeConsumer l_consume;
    l_consume.SetClass({ 2,'2' });//initilized List_InitializeClass class

    LIST::data_t l_data_t{ 2,2.0f,{20,20} };//list initialization with CPoint 

  /// <summary>
  /// Initializing unions and structs
  /// </summary>
  /// <returns></returns>

    MyUnion l_union{};     //initialized with zero  [0,'\0',false, {0,'\0'}]
    MyUnion l_union1{ 1 }; //initialized with zero  [1,'x1',true, {1,'\0'}]
                           //struct first to next element gets initialized so first element of mystruct element always initialized

    MyUnion l_union2{ 'a' };//initialized with zero  [97,'a',true(97), {97,'\0'}]
    MyUnion l_union3{ true };
    MyUnion l_union4{ {'b'}};
    //MyUnion l_union4{ 1,'a'};//compile time error too many initializers

    MyStruct l_struct88{};//zero initializing
    MyStruct l_my_struct{ 1 };     //1 and '\0' initialized
    MyStruct l_my_struct2{ 2,'b'};  //2 and 'b' initialized



    return 0;
}
