#include<stdio.h>
#include<string.h>

void tachham(char* arr)
{
    char res[20][20];
    int i=0;
    char* p;
    const char *brk=" ,.-\t\n";
    for(p=strtok(arr,brk);p!=NULL;p=strtok(NULL,brk))
    {
        strcpy(res[i++],p);
    }
    dem(res);
}
void dem(char ress[20][20])
{
    for(int i=0;i<4;i++)
    {
        int f=0;
        for (int j = 0; j <20 ; j++)
        {
            switch (i)
            {
            case '0': if (ress[i][]='mot')
                {
                    f++;
                }
                
                break;
            case '1':
                if (ress[i][]='hai')
                {
                    f++;
                }
                
                break;            
            case '2':
                if (ress[i][]='ba')
                {
                    f++;
                }
                
                break;
            case '3':
                if (ress[i][]='bon')
                {
                    f++;
                }
                
                break;            
            default:
                break;
            }
        }
      printf("số lần xuất hiện của số %c là %d \n", i, f);  
    }
}



int main()
{
    char arr[]="mot hai mot mot mot, ba bon mot mot";
    return 0;

}