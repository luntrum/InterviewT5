
#include"../header/employee.hpp"

employee::employee(vector<room> data){
    roomDatabase=data;
}

void employee::bookRoom(){
    int id;
    bool isIdExist=false,isRoomBooked=false;
    do
    {
        do
        {
        cout<<"nhap id phong muon dat "<<endl;
        id=numberInput();
        for(auto item:roomDatabase){
            if (item.getRoomID()==id)
            {
                isIdExist=true;
                break;
            }
            
        }
        } while (!isIdExist);
    
   
    for(auto &item:roomDatabase){
        if (item.getRoomID()==id)   
        {
            if (item.isRoomAvailable())
            {
                item.bookRoom();
                isRoomBooked=true;
                break;
            }else{
                cout<<"phong chua san san de dat vui long chon phong khac!!"<<endl;
                break;
            }
            
        }
        
    }    
    } while (!isRoomBooked);
}

void employee::checkIn(){
    int id;
    bool isIdExist=false,choseRoomComplete=false;
    do
    {
        do
        {
        cout<<"nhap id phong muon dat "<<endl;
        id=numberInput();
        for(auto item:roomDatabase){
            if (item.getRoomID()==id)
            {
                isIdExist=true;
                break;
            }
            
        }
        } while (!isIdExist);
    for(auto &item:roomDatabase){
        if (item.getRoomID()==id)   
        {
            if (item.isRoomAvailable())
            {
                item.checkIn();
                choseRoomComplete=true;
                break;
            }else{
                cout<<"phong chua san san de check-in vui long chon phong khac!!"<<endl;
                break;
            }
            
        }
        
    }    
    } while (!choseRoomComplete);
}

void employee::checkOut(){
    int id;
    bool isIdExist=false,choseRoomComplete=false;
    do
    {
        do
        {
        cout<<"nhap id phong muon dat "<<endl;
        id=numberInput();
        for(auto item:roomDatabase){
            if (item.getRoomID()==id)
            {
                isIdExist=true;
                break;
            }
            
        }
        } while (!isIdExist);
    for(auto &item:roomDatabase){
        if (item.getRoomID()==id)   
        {
            if (!item.isRoomAvailable())
            {
                item.checkOut();
                choseRoomComplete=true;
                break;
            }else{
                cout<<"phong nay chua co ai o ma check-out cai gi vui long chon phong khac!!"<<endl;
                break;
            }
            
        }
        
    }    
    } while (!choseRoomComplete);
}


vector<room> employee::getRoomData(){
    return this->roomDatabase;
}
