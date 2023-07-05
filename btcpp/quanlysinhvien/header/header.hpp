#include<iostream>
#include<math.h>
#include<string>
#include<list>

using namespace std;
typedef enum{
    NAM,
    NU,
}gioitinh;

typedef enum{
    GIOI,
    KHA,
    TRUNGBINH,
    YEU,

}hocluc;

class thongTinSinhVien
{
private:
    uint8_t mssv;
    string name;
    gioitinh sex;
    uint8_t age;
    float Math;
    float Chem;
    float Phys;
    float Avg;
    hocluc ability;
public:
    thongTinSinhVien(string ten,int8_t tuoi,gioitinh gt, float diemtoan,float diemhoa,float diemly);
    float getAvg();
    hocluc getAbility();
    void getinfo();
    int getID();
    string getName();
    void updateInfo();

};
void thongTinSinhVien::updateInfo(){
    string ten;
    //int gt;
    float toan,ly,hoa,trungbinh;
    gioitinh Gioitinh;
    hocluc abl;
    uint8_t tuoii;

    cout<<"nhap ten sinh vien: ";
    cin>>ten;
    //cout<<endl;
    cout<<"chon gioi tinh sinh vien: "<<endl;
    cout<<"1 la NAM, 2 la NU";
    int gt;
    cin>>gt;
    if (gt==1) 
    {
        Gioitinh=NAM;
    }else if (gt==2)
    {
        Gioitinh=NU;
    }else cout<<"nhap sai gioi tinh"<<endl;
    cout<<"nhap tuoi sinh vien: ";
    cin>>tuoii;
    cout<<"nhap diem toan sinh vien: ";
    cin>>toan;
    cout<<"nhap diem hoa sinh vien: ";
    cin>>hoa;
    cout<<"nhap diem ly sinh vien: ";
    cin>>ly;
    trungbinh=getAvg();
    abl=getAbility();


    name=ten;
    age=tuoii;
    sex=Gioitinh;
    Math=toan;
    Chem=hoa;
    Phys=ly;
    Avg=trungbinh;
    ability=abl;





}
int thongTinSinhVien::getID(){
    return mssv;
}
string thongTinSinhVien::getName(){
    return name;
}

void thongTinSinhVien::getinfo(){
    cout<<"MSSV la: "<<(int)mssv<<endl;
    cout<<"ten sinh vien: "<<name<<endl;
    cout<<"tuoi sinh vien: "<<(int)age<<endl;
    if (sex==NAM)
    {
        cout<<"gioi tinh la nam"<<endl;
    }else        cout<<"gioi tinh la nu"<<endl;
    cout<<"diem toan cua sinh vien: "<<Math<<endl;
    cout<<"diem hoa cua sinh vien: "<<Chem<<endl;
    cout<<"diem ly cua sinh vien: "<<Phys<<endl;
    cout<<"diem trung binh cua sinh vien: "<<Avg<<endl;
    switch (ability)
    {
    case GIOI:
        cout<<"hoc luc la gioi"<<endl;
        break;
    case KHA:
        cout<<"hoc luc la kha"<<endl;
        break;
    case TRUNGBINH:
        cout<<"hoc luc la trung binh"<<endl;
        break;
    case YEU:
        cout<<"hoc luc la YEUUUUUUUUUUUUUUUUUUUUUUUUUU"<<endl;
        break;
    default:
        break;
    }
    cout<<" "<< endl;
}

float thongTinSinhVien::getAvg(){
    float avg=(Math+Chem+Phys)/3;
    return avg;
}

hocluc thongTinSinhVien::getAbility(){
    if (getAvg()>=8)
    {
        hocluc abl=GIOI;
        return abl;
    }else if (getAvg()>=6.5   )
    {
        hocluc abl=KHA;
        return abl;
    }
    else if (getAvg()>=5  )
    {
        hocluc abl=TRUNGBINH;
        return abl;
    }else 
    {
        hocluc abl=YEU;
        return abl;
    }
}

thongTinSinhVien::thongTinSinhVien(string ten,int8_t tuoi,gioitinh gt, float diemtoan,float diemhoa,float diemly)
{   
    static uint8_t id=100;
    mssv=id;
    id++;
    name=ten;
    age=tuoi;
    sex=gt;
    Math=diemtoan;
    Chem=diemhoa;
    Phys=diemly;
    Avg=getAvg();
    ability=getAbility();  
    
}

class menu
{
private:
    list<thongTinSinhVien> database;
public:
    void addSV(thongTinSinhVien sv);
    void updateID(int id);
    void deleteID(int id);
    void findWithName();
    void sortingbyAvg();
    void sortingbyName();
    void hienthidatabase();
};

void menu::addSV(thongTinSinhVien sv)
{
    //thongTinSinhVien sv(ten,tuoi,gt,diemtoan,diemhoa,diemly);
    database.push_back(sv); 
}
void menu::hienthidatabase(){
    for(auto item:database){
        item.getinfo();
    }
}
void menu::deleteID(int id){
    auto n=database.begin();
for(auto item:database){
    if (item.getID()!=id)
    {
        n++;
    }else break;
    
}
    database.erase(n);
}
void menu::updateID(int id){
    for(auto item:database){
        if(item.getID()==id){
            item.updateInfo();
            break;
        }
    }
}












