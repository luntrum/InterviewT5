#ifndef __ROOM__
#define __ROOM__
#include<iostream>
#include"hotelManager.hpp"

class room
{
private:
    int roomNumber;
    bool isBooked;
    bool isCleaning;
public:
    room(int number);
    bool isRoomAvailable();
    int getRoomID();
    void bookRoom();
    void checkIn();
    void checkOut();
    void showRoomInfo();
};





#endif