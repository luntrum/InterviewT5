
//-------------------------------------------------------------------------------//


//-----------------------------------------------------------------------------------------------------//

bool thongTinBan::getTrangthaiban(){
    return TRANG_THAI;
}
void thongTinBan::themMon(){
}


thongTinBan::thongTinBan(int soban,bool trangthaiban)
{
    BAN_SO=soban;
    TRANG_THAI=trangthaiban;
}



/// ----------------------------------------------------------------------- /////

nhanvien::nhanvien(list<monAn> database,int soban)
{
    if (soban==0||database.size()==0)
    {
        cout<<"chua co thong tin so luong ban hoac menu vui long quay lai quan ly de thiet lap"<<endl;
    }else{
        for (int i = 1; i < soban; i++)
        {
            thongTinBan ban(i,false)
            databan.push_back(ban);
        }
        datamon.assign(database.begin(),database.end());
    }
    
}







