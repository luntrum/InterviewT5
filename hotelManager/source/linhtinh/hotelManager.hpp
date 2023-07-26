#ifndef __HOTEL_MANAGER__
#define __HOTEL_MANAGER__
#include <iostream>

using namespace std;







#define ENTER_NUMBER(func_name,introduction,condition)\
    int func_name(){  \
    int var;\
    do                                          \
    {                                           \
        cout<<introduction<<endl;               \
        while(!(cin>>var)){                     \
            cin.clear();                        \
            cout<<"chi nhap so"<<endl;               \
            cin.ignore(200,'\n') ;              \
        }                                       \
    } while (condition);\
    return var;\
    }
ENTER_NUMBER(dayInput,"nhap ngay: ",var<1||var>31)
ENTER_NUMBER(monthInput,"nhap thang: ",var<1||var>12)
ENTER_NUMBER(yearInput,"nhap nam: ",var<2010||var>2023)
ENTER_NUMBER(hourInput,"nhap gio: ",var<0||var>23)
ENTER_NUMBER(minuteInput,"nhap phut: ",var<0||var>60)
ENTER_NUMBER(secondInput,"nhap giay: ",var<0||var>59)

#define VALUE(content)\
cout<<content<<endl;


    

#define ENTER_STRING(func_string_name,introduction,condition,remind)\
    string func_string_name(){\
    string var;     \
    cout<<introduction<<endl;                       \
    do                                              \
    {                                               \
        getline(cin,var);                           \
        for(char item:var)                          \
        {                                           \
            if(condition){                          \
            cout<<remind<<endl;                   \
            var="";                                 \
            cin.ignore(0,'\n');                   \
            break;                                  \
            }                                       \
        }                                           \
    }while(var=="");\
    return var;\
    }
ENTER_STRING(clientName,"nhap ten khach hang",(item<'a' || item>'z') && (item<'A' || item>'Z' )&& (item !=' ')&& (item < '0'|| item > '9'),"nhap lai ten")

    

#endif 