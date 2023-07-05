#include <stdio.h>
#include<string.h>

void tachchuoi(char array)
{

}


void tachtu(char* s)
{
   char res[10][20];
   char *p;
   const char *brptr=" ";
   for(p=strtok(s,brptr);p!=NULL;p=strtok(NULL,brptr))
   {
    
   }
   
}

int main()
{

    char array[50]="Mot hai ba bon nam, sau bay tam chin muoi";//// khai bao chuoi
    daochuoi(array[50]);

    printf("chuoi ky tu sau khi sap xep %s",array);
    
    return 0;
}