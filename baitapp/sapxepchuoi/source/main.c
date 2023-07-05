#include"..\header\header.h"
#include"daomang.c"

int main(){

    char str[]="how to learn Embedded and become pro-Dev";
    uint8_t n=countCharacterofString(str);
    printf("số kí tự có trong mảng là: %d \n",n);
    daochuoi(str,n);


    


    return 0;
}