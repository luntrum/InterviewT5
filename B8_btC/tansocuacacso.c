#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int f;
    char s[]="0 2 5 6 891354132165132151.212";
    char i;
    int len=strlen(s);
    for(i=48;i<58;i++)
    {  //gia tri cua 0-9 trong gia tri ascii
    {
        f=0;
        for(int j=0;j<len;j++)
        {
            if(s[j]==i)
            {
                f++;
            }
        }
        
       
    }
    printf("số lần xuất hiện của số %c là %d \n", i, f);
    }
          
    return 0;
}