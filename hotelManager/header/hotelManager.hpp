#ifndef __HOTEL_MANAGER__
#define __HOTEL_MANAGER__
#include <iostream>
using namespace std;
#define KEY_FUNC_INPUT(func_name,var,condition,...)                             \
void func_name(int &var){                                                   \
    do                                                                      \
    {                                                                       \
        __VA_ARGS__                                                        \
        CHOICE("nhap lua chon ",var,condition,"chi nhap so ");    \
    } while (condition);                                                    \
}
#define CHOICE(introduction,var,condition,reminder)  \
    do                                          \
    {                                           \
        cout<<introduction<<endl;               \
        while(!(cin>>var)){                     \
            cin.clear();                        \
            cout<<reminder<<endl;               \
            cin.ignore(200,'\n') ;              \
        }                                       \
    } while (condition);
#define VALUE(content)\
cout<<content<<endl;

KEY_FUNC_INPUT(fixclient,var,var<0||var>4,
                    VALUE("1. sua ten")
                    VALUE("2. sua sdt")
                    VALUE("3. sua address")
                    VALUE("4. sua bookingHis")
                    VALUE("0. quay lai"))
KEY_FUNC_INPUT(coutinueChoice,var,var<0||var>1,
                    VALUE("1. tiep tuc thao tac cua nhan vien")
                    VALUE("0. quay lai"))
KEY_FUNC_INPUT(employeeContact,var,var<0||var>3,
                    VALUE("1. book phong")
                    VALUE("2. check-in")
                    VALUE("3. check-out")
                    VALUE("0. quay lai"))


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
ENTER_NUMBER(numberInput,"nhap so ban muon: ",var<0)
ENTER_NUMBER(roomIDInput,"nhap so id phong: ",var<100)

    

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
ENTER_STRING(clientAddress,"nhap dia chi cua khach hang",(item<'a' || item>'z') && (item<'A' || item>'Z' )&&(item!=',')&& (item !=' ')&& (item < '0'|| item > '9'),"nhap lai dia chi")
ENTER_STRING(clientNumber,"nhap so dien thoai",(item < '0'|| item > '9'),"nhap lai so dien thoai")  
ENTER_STRING(clientName,"nhap ten khach hang",(item<'a' || item>'z') && (item<'A' || item>'Z' )&& (item !=' '),"nhap lai ten")


    

#endif 


