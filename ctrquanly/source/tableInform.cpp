#include"../header/tableInform.hpp"


void tableInform::resetTableInform(int numberofTable){
    tableNumber=numberofTable;
    status=EMPTY;
    //orderedList.clear();
}

void tableInform::getTableStatus(){
    switch (status)
    {
    case EMPTY:
        cout<<"ban dang trong"<<endl;
        break;
    case RUNNING:
        cout<<"ban dang co khach"<<endl;
        break;
    
    default:
        break;
    }
}
void tableInform::changeTableStatus(){  
  //  cout<<"nhap trang thai ban"<<endl;
    //cout<<"1. ban dang hoat dong"<<endl;
    //cout<<"0. ban trong"<<endl;
    //ENTER_INFORM("lua chon trang thai: ",inputStatus,inputStatus<0&&inputStatus>1,"chi nhap 1 hoac 0");
    status=RUNNING;
}
void tableInform::addOdered(orderedFood ordered){
    int isOrderedExist=0;
    if (orderedList.empty())    
    {
        orderedList.push_back(ordered);
    }else {
        for (auto item:orderedList)
        {
            if (item.getOrderedID()==ordered.getOrderedID())
            {
                isOrderedExist=1;    
                break;
            }          
        }
        if (isOrderedExist==0)
        {
            orderedList.push_back(ordered);
        }

    }       
}

void tableInform::listOfOdered(){
    cout<<"ban so "<<tableNumber<<endl;
    cout<<"mon da chon la:"<<endl;
    for(auto item:orderedList){
        item.showInfo();
        cout<<"------------------"<<endl;
    }
}

void tableInform::updateOdered(int ID,int num){
    for(auto &item:orderedList){
        if (item.getOrderedID()==ID)
        {
            item.increaseNumofOrdered(num);
        }
        
    }
}


void tableInform::deleteOdered(int ID){
    auto n=orderedList.begin();
    for(auto &item:orderedList){
        if (item.getOrderedID()!=ID)
        {
            n++;
        }else break;
    }
    
    orderedList.erase(n);
}

void tableInform::bill(){
    double total=0,singleFoodTotal;
    for(auto item:orderedList){
        item.showInfo();
        singleFoodTotal=item.getFoodPrice()*(double)item.getNumofOrdered();
        cout<<"tong cua mon la: "<<singleFoodTotal<<endl;
        cout<<"////////////"<<endl;
        total=total+singleFoodTotal;
    }
    cout<<"****************************"<<endl;
    cout<<"tong hoa dong la:"<<total<<endl;
    cout<<"cam on quy khach da su dung dich vu."<<endl;
}






