#include<iostream>
#include<string>
using namespace std;

class sinhvien
{
public:
    void setThongTin(string ten, int tuoi,int lop);
    void hienThi();

protected:
    string TEN;
    int TUOI;
    int LOP;

};

void sinhvien::setThongTin(string ten, int tuoi,int lop){
    TEN=ten;
    TUOI=tuoi;
    LOP=lop;
}

void sinhvien::hienThi()
{
    cout <<"day la class Sinh vien"<<endl;
    cout<<"Ten Sinh vien la: "<<TEN<<endl;
    cout << "Tuoi: " << TUOI << endl;
    cout << "lop:  " << LOP << endl;
};

class doituong:sinhvien{
    public:
        void setThongTin(string ten, int tuoi,int lop,int mssv);
        void hienThi();
    private: 
        int MSSV;
};
void doituong::setThongTin(string ten,int tuoi, int lop,int mssv){
    TEN=ten;
    TUOI=tuoi;
    LOP=lop;
    MSSV=mssv;
}
void doituong::hienThi(){
    cout <<"day la class doi tuong"<<endl;
    cout<<"Ten Sinh vien la: "<<TEN<<endl;
    cout << "Tuoi: " << TUOI << endl;
    cout << "lop:  " << LOP << endl;
    cout << "MSSV:  " << MSSV << endl;


}




int main(){
    sinhvien sv;
    sv.setThongTin("cuong",9,8);
    sv.hienThi();
    cout<<endl;
    doituong dt;
    dt.setThongTin("nga",22,20,16553);
    dt.hienThi();


}
