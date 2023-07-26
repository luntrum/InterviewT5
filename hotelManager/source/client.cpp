#include"client.hpp"
/*
* Class: client
* Function: bookingHistoryInput
* Description: This function use for create or update client history booking
* Input:none
* Output:
*   return: none
*/

void client::importBookingHistory(int roomNumber,typeStatus roomStatus){
    typeDay DAY;
    DAY.year=yearInput();
    DAY.month=monthInput();
    do
    {
        DAY.day=dayInput();
        if (DAY.month==2&&DAY.day>28&&(DAY.year!=2020&&DAY.year!=2016&&DAY.year!=2012))
        {
            cout<<"nhap lai ngay nho hon hoac bang 28"<<endl;
        }else if (DAY.month==2&&DAY.day>29&&(DAY.year==2020||DAY.year==2016||DAY.year==2012))
        {
            cout<<"nhap lai ngay nho hon hoac bang 29"<<endl;
        }else if ((DAY.month==4||DAY.month==6||DAY.month==9||DAY.month==11)&&DAY.day>30)
        {
            cout<<"nhap lai ngay nho hon hoac bang 30"<<endl;
        }else break;
        
    } while (true);
    typeTime TIME;
    TIME.hour=hourInput();
    TIME.minute=minuteInput();
    TIME.second=secondInput();

    bookingHistory client;
    client.day=DAY;
    client.time=TIME;
    client.roomID=roomNumber;
    client.status=roomStatus;
    bookingHis.push_back(client);
}


/*
* Class: client
* Function: setInform
* Description: This function use for create client information
* Input:
*   phone number of client  
*   client Name
*   client Address
*   client history booking in hotel
* Output:
*   return: none
*/
void client::setInform(int roomNumber,typeStatus roomStatus){
    phoneNumber=clientNumber();
    clientName=clientName();
    clientAddress=clientAddress();
    bookingHistoryInput( roomNumber,roomStatus);
}
/*
* Class: client
* Function: fixInform
* Description: This function use for fix client information
* Input:none
* Output:
*   return: none
*/
void client::fixInform(){
    int choice;
    double num;
    string name, address;
    time his;
    do
    {
        fixclient(choice);
        switch (choice)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
    } while (choice!=0);
       
}