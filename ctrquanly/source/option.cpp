
monAn::monAn(int id,string nameofFood, double gia){
    ID=id;
    foodName=nameofFood;
    price=gia;
}
monAn::monAn(string nameofFood, double gia){
    static int id=100;
    ID=id;
    id++;
    foodName=nameofFood;
    price=gia;
}
void monAn::showInfo(){
    cout<<"ID mon an la: "<<ID<<endl;
    cout<<"ten mon an la: "<<foodName<<endl;
    cout<<"gia mon la: "<<price<<endl;
    cout<<"------------------------------------"<<endl;
   // cout<<"so luong la: "<<totalNumber<<endl;
}
int monAn::getID(){
    return ID;
}
//-------------------------------------------------------------------------------//

quanly::quanly(){
   // cout<<"nhap so luong ban: ";
    //cin>>soban;
    //cin.ignore();

    int i=0,n=0;
    do
    {
        cout<<"1. them mon "<<endl;
        cout<<"2. xoa mon "<<endl;
        cout<<"3. sua mon "<<endl;
        cout<<"4. hien thi danh sach mon"<<endl;
        cout<<"0. quay lai"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            themmon();
            do
            {
                int j;
                cout<<"1. nhap them mon"<<endl;
                cout<<"0. quay lai"<<endl;
                cin>>j;
                //cin.ignore(0);
                if ((int)j==1)
                {
                    themmon();
                }else if ((int)j==0)
                {
                    break;
                }else cout<<"vui long chi nhap 1 hoac 0"<<endl;             
            } while (true);   
            break;
        case 2:
            xoamon();
            break;
        case 3:
            suamon();
            break;
        case 4:
            showMenu();
            break;
        case 0:
            i=1;
            break;
        default: 
            break;
        }
    } while (i==0);
    
}
string nhapmonan(){
    string name;
    int i=0;
    do
    {
        cout<<"nhap ten mon an: "; 
        cin.ignore();
        getline(cin,name);
        int n=0;
        for( char item:name){
            if((item<'a' || item>'z') && (item<'A' || item>'Z' )&& item !=' '&& (item < '0'|| item > '9')) n++;
        }
        if (n!=0){
            cout<<"vui long khong su dung ky tu dac biet khi dat ten cho mon an"<<endl;
        }else i=1;
    } while (i==0);
    return name;
}
void quanly::themmon(){
    string name=nhapmonan();
    double price;
    cout<<"Nhap gia cua mon an: ";
    cin>>price;
    cin.ignore();
    monAn food(name,price);
    database.push_back(food);
}
void quanly::xoamon(){
    int id;
    cout<<"nhap ID mon can xoa: ";
    cin>>id;
    auto n=database.begin();
    for(auto item:database){
        if(item.getID()!=id){
            n++;
        }else break;
    }
    database.erase(n);
}
void quanly::suamon(){

    int id;
    cout<<"nhap ID mon can sua: ";
    cin>>id;
    auto n=database.begin();
    for(auto item:database){
        if(item.getID()!=id){
            n++;
        }
    }
    string name=nhapmonan();
    double price;
    cout<<"Nhap gia cua mon an: "<<endl;
    cin>>price;
    monAn food(id,name,price);
    database.insert(n--,food);
    database.erase(n);
}
void quanly::showMenu(){
  for(auto item:database){
    item.showInfo();
  }
  
 // return 0;
}
int quanly::getsoban(){
    return soban;
}
list<monAn> quanly::getMenu(){
    return this ->database;
}
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







