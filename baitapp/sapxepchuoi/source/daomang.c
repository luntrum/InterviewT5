void daochuoi(char arr[],uint8_t n){
    char **p;
    int lenofCharater[n];
    
    p=(char**)malloc(n*sizeof(char*));
    
    for (int i = 0; i < n-1; i++)
    {
        *(p+i)=malloc(100*sizeof(char));
    }
    int i = 0,j=0;
    /////tach chuoi
    while(*arr!='\0'){
        
        if(*arr==' '){
          //  *(p+i)=realloc(*(p + i),j+1);
            
            i++;
            *arr='\0';
            arr++;

            j=0;
            continue;
        }else{
            *((p+i)+j)=arr;
            j++;
            lenofCharater[i]=j;
            arr++;
            continue;
            
        } 
        arr++;
    }

    ///// đảo mảng.
    for (int i = n-1; i >=0; i--)
    {
        
           printf("%s ", *(p+i));    
           //int k=sizeof(*(p+i));
           printf("kich thuoc cua ki tu la: %d \n",lenofCharater[i]);
    }
    

   // return p;
}

uint8_t countCharacterofString(char arr[]){
    uint8_t dem=0;
    while(*arr!='\0'){
        if(*arr==' ')dem++;
        arr++;
    }
    return dem+1;


}

