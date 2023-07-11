#include"../header/manager.hpp"
#include"../header/food.hpp"
/*
* Class: manager
* Function: manager
* Description: This function use for start the manager
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
manager::manager(){
    int i=0,n=0;
    do
    {
        cout<<"1. them mon "<<endl;
        cout<<"2. xoa mon "<<endl;
        cout<<"3. sua mon "<<endl;
        cout<<"4. hien thi danh sach mon"<<endl;
        cout<<"0. quay lai"<<endl;
        ENTER_INFORM("lua chon cua ban: ",n,n<0&&n>4,"nhap lua chon trong khoang tu 0 den 4");
        switch ((managerChoice)n)
        {
        case IMPORT_FOOD:
            importFood();
            do
            {
                int j;
                cout<<"1. nhap them mon"<<endl;
                cout<<"0. quay lai"<<endl;
                ENTER_INFORM("nhap lua chon cua ban: ",j,j<0&&j>1,"nhap lua chon la 0 hoac 1");
                //cin.ignore(0);
                if ((int)j==1)
                {
                    importFood();
                }else if ((int)j==0)
                {
                    break;
                }           
            } while (true);   
            break;
        case DELETE_FOOD:
            deleteFood();
            break;
        case UPDATE_FOOD:
            updateFood();
            break;
        case SHOW_MENU:
            showMenu();
            break;
        case QUIT:
            i=1;
            break;
        default: 
            break;
        }
    } while (i==0);
    
}
string importFoodName(){
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
void manager::importFood(){
    string name=importFoodName();
    double price;
    cout<<"Nhap gia cua mon an: ";
    cin>>price;
   // cin.ignore();
    food food(name,price);
    database.push_back(food);
}
void manager::deleteFood(){
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
void manager::updateFood(){

    if(database.empty()){
        cout<<"chua co du lien mon an vui long nhap du lieu mon an"<<endl;
        return;
    }
    int id,is_ID_exist=0,choice;
    double price;
  //  auto n=database.begin();
   // 
    string name;
    
    do
    {   
        ENTER_INFORM("nhap id mon an muon thay doi: ",id,id<100,"vui long nhap so lon hon hoac bang 100");
        for(auto &item:database){
            if(item.getID()==id){
                is_ID_exist=1;
                do
        {
            cout<<"lua chon thay doi gia tri mon an"<<endl;
            cout<<"1. thay doi ten mon an."<<endl;
            cout<<"2. thay doi gia mon an."<<endl;
            cout<<"3. thay doi ten va gia mon an."<<endl;
            cout<<"0. quay lai."<<endl;
            ENTER_INFORM("lua chon cua ban la: ",choice,choice<0&&choice>3,"nhap mot trong cac so tu 0 den 3");
            switch ((updateChoice)choice)
            {
            case   UPDATE_NAME :
                name=importFoodName();
                item.setFoodInform(name);
                cout<<"mon an da duoc thay doi thanh:"<<endl;
                item.showInfo();
                break;
            case   UPDATE_PRICE :
                ENTER_INFORM("gia ma ban muon thay doi: ",price,price<0,"nhap gia tri la so lon hon khong");
                item.setFoodInform(price);
                cout<<"mon an da duoc thay doi thanh";
                item.showInfo();
                break;
            case   UPDATE_ALL :
                name=importFoodName();
                ENTER_INFORM("gia ma ban muon thay doi: ",price,price<0,"nhap gia tri la so lon hon khong");
                item.setFoodInform(name,price);
                cout<<"mon an da duoc thay doi thanh";
                item.showInfo();
                break;  
            case QUIT:
                is_ID_exist=2;
                break;
            default:
                break;
            }


        } while (is_ID_exist==1);
            }
        }
        
        
                
    } while (is_ID_exist==0);
    


    
    
}
void manager::showMenu(){
  for(auto item:database){
    item.showInfo();
  } 
 // return 0;
}
int manager::getNumberTable(){
    return numberTable;
}
list<food> manager::getMenu(){
    return this ->database;
}