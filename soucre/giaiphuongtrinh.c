//#include"../header/datatype.h"



void GiaiPTBac1(int a,int b)
{
       float x,xb=b,xa=a;
       x=xb/xa;
       printf("Phuong trinh co nghiem x = %.03f \n",x);
    
}

void GiaiPTBac2(int a,int b,int c)
{

    int delta= b*b-4*a*c;

    if(delta < 0)
    {
        printf("phuong trinh vo nghiem");
    }else if(delta==0)
    {
        float x,xb=b,xa=a;
        x=-xb/(2*xa);
        printf("phuong trinh co mot nghiem la: x= %.02f",x);
    }
    else if(delta>0)
    {
        float x1,x2;
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("phuong trinh co 2 nghiem la x1= %.02f \n x2= %.2f",x1,x2);
    }
}



int checkTypeofEqual(int a,int b,int c){
    int i=0;
    if(a!=0){
        printf("phuong trinh bac 2\n");
        i=1;
    }else if(b!=0){
        printf("phuong trinh bac 1\n");
        i=0;
    }else if(c!=0){ 
        printf("phuong trinh vo nghiem\n");
    }else 
    {
        i=-1;
    }
    return i;
}



void giaiPT(char *input)
{
    removeSpaces(input);
    inchuoi(input);
    printf("\n");
    EquaElement result;
    nhappt(input,result);
}