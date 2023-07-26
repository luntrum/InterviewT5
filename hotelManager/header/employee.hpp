#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include<iostream>
#include"room.hpp"
//#include"manager.hpp"
#include<vector>



class employee
{
private:
    vector<room> roomDatabase;
public:
    employee(vector<room> data);
    vector<room> getRoomData();
    void bookRoom();
    void checkOut();
    void checkIn();

};





#endif