

void remove1Phantu(char str[],int n,int vitri){
    for(int i=vitri;i<n-1;i++){
        str[i]=str[i+1];     
    }
                str[n-1]='\0';    

    n--;
}
void removeSpaces(char str[])
{
    int n=strlen(str);
    int i;
    for (i = 0; i<n-1; i++)
    {
        if (str[i] == ' ')
        {
            remove1Phantu(str,n,i);
            i--;    
        }
    }
}
void inchuoi(char input[]){
    int n=strlen(input);
    int i=0;
    while(i<n){
        printf("%c",input[i]);
        i++;
    }
}

void nhappt(char input[],EquaElement result)
{
    
    result.a=0;
    result.b=0;
    result.c=0;

    // Tách giá trị của a và b từ chuỗi phương trình
    //int i=0;
    int number=0;
    while(*input!='\0')
    {
        if((*input >='0' && *input <= '9')){
            if(*(input-1) == '-'||number<0)
            {
                int temp=*input-'0';
                number=10*number-temp;
                input++;
                continue;
            }else{
                int temp=*input-'0';
                number=10*number+temp;
                input++;
                continue;
            }
        }else if(*input=='x' && *(input+1)=='^'){
                result.a=result.a+number;
                number=0;
                input+=2;
        }else if(*input=='x' && *(input+1)!='^'){
               
                result.b=result.b+number;
                number=0;
        }else if(number!=0){
            result.c=result.c+number;
            number=0;
        }
       // result.c=result.c+number;
        input++;
    }
    result.c=result.c+number;
    number=0;
    
    int a,b,c;
     a=result.a;
     b=result.b;
     c=result.c;


    printf("a=%d b=%d c=%d\n",a,b,c);


    /*a=result.a;
    
     b=result.b;

     c=result.c;

    printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("c= %d\n",c);*/
    int kq=checkTypeofEqual(a,b,c);
    if(kq==1){
        GiaiPTBac2(a,b,c);
    }else if(kq==0){
        GiaiPTBac1(b,c);
    }else printf("phuong trinh vo nghiem");
   // return a,b,c;
}
