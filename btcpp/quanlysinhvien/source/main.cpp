#include"../header/header.hpp"
//#include"xylythongtin.cpp"


int main(){
    thongTinSinhVien sv("Nguyen Thien Nga",23,NU,8.6,9.3,8.8),sv1("LAN dbrr",20,NAM,6.5,2.3,4),sv2("Nhat Hoang",19,NAM,6.2,6.8,7.2);

    
    cout<<"GPA la: "<<sv.getAvg()<<endl;
    //sv.getinfo();

    menu data;
    data.addSV(sv);
    data.addSV(sv1);
    data.addSV(sv2);
   // data.deleteID(101);
    data.updateID(100);
    data.hienthidatabase();


    return 0;
}
