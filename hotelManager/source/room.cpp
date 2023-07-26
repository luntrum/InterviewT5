#include "../header/room.hpp"
/*
* Class: room
* Function: room
* Description: This function use for create one room
* Input:
* number of the room
* Output:
*   return: none
*/
room::room(int number){
    room::roomNumber=number;
    room::isBooked=false;
    room::isCleaning=false;
}



/*
* Class: room
* Function: isRoomAvailable
* Description: This function use for get the status of the room
* Input:none
* Output:
*   return: the room status iclude with two element isBooked and isCleaning
*/
bool room::isRoomAvailable(){
    return !isBooked;
}
/*
* Class: room
* Function: getRoomID
* Description: This function use for get the ID of the room
* Input:none
* Output:
*   return: the room ID include by element roomNumber
*/
int room::getRoomID(){
    return roomNumber;
}
/*
* Class: room
* Function: bookRoom
* Decription: This function use for employee to book room
* Input: none
* Output: none
*/
void room::bookRoom(){
    isBooked=true;
}
/*
* Class: room
* Function: checkIn
* Decription: This function use for employee to check in room
* Input: none
* Output: none
*/
void room::checkIn(){
    isBooked=true;
    isCleaning=false;
}
/*
* Class: room
* Function: bookRoom
* Decription: This function use for employee to check out room
* Input: none
* Output: none
*/
void room::checkOut(){
    isBooked=false;
    isCleaning=true;
}
/**/
void room::showRoomInfo(){
    cout<<"phong so "<<roomNumber<<" trang thai phong: ";
    if (!isBooked)
    {
        cout<<"phong chua duoc dat va ";
    }else cout<<"phong da duoc dat va ";
    if (!isCleaning)
    {
        cout<<"phong da don dep xong"<<endl;
    }else cout<<"phong dang duoc don dep"<<endl;
}







/*
* Class:
* Function:
* Decription:
* Input:
* Output:
*/

