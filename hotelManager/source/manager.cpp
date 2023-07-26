#include"../header/hotelManager.hpp"
#include"../header/manager.hpp"




manager::manager(){
    int numberofFloors,numberofRooms;
    int ID;
    
    cout<<"-------Thiet lap so tang cua khach san---------"<<endl;
    numberofFloors=numberInput();
    for (int i = 1; i <= numberofFloors; i++)
    {
        cout<<"thiet lap so phong cua tang "<<i<<endl;
        numberofRooms=numberInput();
        for (int j = 1; j <= numberofRooms; j++)
        {
            ID=i*100+j;
            room oneRoom(ID);
            roomDatabase.push_back(oneRoom);
        }
    }
    
}
void manager::showRoomList(){
    for(auto item:roomDatabase){
        item.showRoomInfo();
        
    }
}
vector<room> manager::getRoomData(){
    return this ->roomDatabase;
}
void manager::updateData(vector<room> data){
    roomDatabase=data;
}

