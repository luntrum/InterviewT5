#ifndef __CLIENT__
#define __CLIENT__
#include <iostream>
#include "hotelManager.hpp"
#include <string>

using namespace std;


typedef struct 
{
    int day;
    int month;
    int year;
}typeDay;
typedef struct 
{
    int hour;
    int minute;
    int second;
}typeTime;

typedef enum {
    IN,
    OUT,
}typeStatus;

typedef struct 
{
    int roomID;
    typeDay day;
    typeTime time;
    typeStatus status;
}bookingHistory;


/*-------CREATE CLASS CLIENT--------*/


class client
{
private:
    
    string phoneNumber;
    string clientName;
    string clientAddress;
    vector<bookingHistory> bookingHis;

public:
    void setInform(int roomNumber,typeStatus roomStatus);
    void fixInform();
    void importBookingHistory(int roomNumber,typeStatus roomStatus);
};







#endif