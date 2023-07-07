#include<iostream>
#include<list>
#include<string>

using namespace std;


class monAn
{
private:
    int ID;
    string foodName;
    double price;
   // int totalNumber;
public:
    monAn(string nameofFood, double gia);
    monAn(int id,string nameofFood, double gia);
    void showInfo();
    int getID();
    
};

class quanly
{
private:
    list<monAn> database;
    int soban;
    void themmon();
    void xoamon();
    void suamon();
public:
    quanly(); 
    void showMenu();
    int getsoban();
    list<monAn> getMenu();
};


class thongTinBan
{
private:
    int BAN_SO;
    bool TRANG_THAI;
    typedef struct 
    {
        monAn monAnDaDat;
        int soluong;
    }typeMonAn;
    list<typeMonAn> dataBan;
    
public:
    thongTinBan(int soban,bool trangthaiban);
    bool getTrangthaiban();
    void themMon();
    void suaMon();
    void xoaMon();
    void danhSachMon();
    void thanhToan()
};


class nhanvien
{
private:
    list<thongTinBan> databan;
    list<monAn> datamon;
public:
    nhanvien(list<monAn> database,int soban);
    void getInofTable();
};