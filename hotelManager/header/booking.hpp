#ifndef __BOOKING__
#define __BOOKING__
#include <iostream>
#include <vector>
#include "room.hpp"

using namespace std;


class booking
{
private:
    vector<room> hotelRoom;
public:
    void startBooking();
};







#endif