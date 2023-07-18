/*
* File: quanLyNhaHang_NguyennHuuLoc.cpp
* Author: NGUYEN HUU LOC
* Date: 10/07/2023
* Description: This is file for restaurant management
*/
#include<iostream>
#include<list>

#include<string>
#include"../header/manageStore.hpp"
using namespace std;
#include"food.cpp"
#include"orderedFood.cpp"
#include"manager.cpp"
#include"tableInform.cpp"
#include"staff.cpp"



int main(){
    
    cout<<"-----------vui long setup cho quan cua ban-------------"<<endl;
    manager ql;
    staff nv;
    
    //staff nv(ql);
    int start;
    do
    {
        cout<<"lua chon chuc vu: "<<endl;
        cout<<"1. quan ly."<<endl;
        cout<<"2. nhan vien"<<endl;
        cout<<"0. thoat."<<endl;
      //  cin.ignore(2,'\n');
        ENTER_INFORM("lua chon cua ban la: ",start,start<0&&start>2,"vui long chon 1,2 hoac 0");
        cin.ignore(50,'\n');
        switch ((managerStore)start)
        {
        case QUAN_LY:
            ql.setNumberofTable();
            ql.contactStore();
            
           // start=1;
            break;
        case NHAN_VIEN:
            //numberofTables=;
            
            if (ql.getNumberTable()<=0)
            {   
                cout<<"vui long thao tac quan ly truoc"<<endl;
                break;
            }
            if(ql.getNumberTable()>0){
                nv.updateStaff(ql);
                nv.choseTable();
                break;
            }        
        case OUT:
            cout<<"ban da thoat quan "<<endl;
            break;
        default:
            break;
        }
        
        
    } while (start!=0);
    

    

    return 0;
}