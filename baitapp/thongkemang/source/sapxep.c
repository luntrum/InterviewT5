void swap(uint8_t *a,uint8_t *b){
    uint8_t temp=0;
    temp=*a;
    *a=*b;
    *b=temp; 
}

void sortList(uint8_t arr[],uint8_t n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j]) swap(arr+i,arr+j);
        }
    }
}

void statistical(uint8_t arr[],uint8_t n){
    int dem=1;
    for (uint8_t i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[i+1]){
            printf("\n số %d xuất hiện %d lần",arr[i],dem);
            dem=1;
        }else if(arr[i]==arr[i+1]) {
            dem++;
            continue;
        }
    }
    
}

void printarr(uint8_t arr[],uint8_t n){
    for (int i = 0; i < n-1; i++)
    {
        printf("%d  ",arr[i]);
    }
    
}