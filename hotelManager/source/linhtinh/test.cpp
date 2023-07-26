#include<iostream>
#include "hotelManager.hpp"

using namespace std;

typedef struct 
{
    int day;
    int month;
    int year;
}typeDay;

int main(){
   // string name;
    //name=clientName();
    //cout<<"ten vua nhap la: "<<name<<endl;
  // int test;
   //test=dayInput();
    //cout<<"lua chon vua nhap la: "<<test<<endl;



    typeDay DAY;
    DAY.year=yearInput();
    DAY.month=monthInput();
    do
    {
        DAY.day=dayInput();
        if (DAY.month==2&&DAY.day>28&&(DAY.year!=2020&&DAY.year!=2016&&DAY.year!=2012))
        {
            cout<<"nhap lai ngay nho hon hoac bang 28"<<endl;
        }else if (DAY.month==2&&DAY.day>29&&(DAY.year==2020||DAY.year==2016||DAY.year==2012))
        {
            cout<<"nhap lai ngay nho hon hoac bang 29"<<endl;
        }else if ((DAY.month==4||DAY.month==6||DAY.month==9||DAY.month==11)&&DAY.day>30)
        {
            cout<<"nhap lai ngay nho hon hoac bang 30"<<endl;
        }else break;
        
    } while (true);

    cout<<"ngay vua nhap: "<<DAY.day<<"/"<<DAY.month<<"/"<<DAY.year<<endl;



}