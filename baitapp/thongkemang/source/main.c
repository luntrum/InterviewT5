#include"..\header\header.h"
#include"sapxep.c"
#include"tachmang.c"


int main(){

    uint8_t arr[]={5,8,3,66,5,2,16,89,5,1,2,2,6,3,4,8,2,9,3,1,4,5,2,6,4,2,15,5,0,2,5,2,6,32,35,2,35,51,3,1};
    uint8_t sizearr = sizeof(arr)/sizeof(uint8_t);
    

    sortList(arr,sizearr);
    printarr(arr,sizearr);
    statistical(arr,sizearr);

}
