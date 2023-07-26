#ifndef __MANAGER__
#define __MANAGER__

#include<iostream>
#include<vector>

#include"room.hpp"


class manager
{
protected:
    vector<room> roomDatabase;
public:
    manager();
    void showRoomList();
    vector<room> getRoomData();
    void updateData(vector<room> data);

//~manager();
};





#endif