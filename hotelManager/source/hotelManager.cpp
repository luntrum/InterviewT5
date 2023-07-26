#include"../header/hotelManager.hpp"
#include"room.cpp"
#include"manager.cpp"
#include"employee.cpp"

int main(){
    int choice;
    manager hotel;
    hotel.showRoomList();
    employee nv(hotel.getRoomData());
    
    do
    {   
        employeeContact(choice);
        switch (choice)
        {
        case 1:
            nv.bookRoom();
            hotel.updateData(nv.getRoomData());
            hotel.showRoomList();
            break;
        case 2:
            nv.checkIn();
            hotel.updateData(nv.getRoomData());
            hotel.showRoomList();
        break;
        case 3:
            nv.checkOut();
            hotel.updateData(nv.getRoomData());
            hotel.showRoomList();
            break;
        default:
            break;
        }        
    } while (choice!=0);
    


    


}