

// nhap vao ban phim sau do tinh +-*/


void stringtoDec(char input[],TypeMaths output[] )
{
    uint16_t number=0;
    uint8_t i=0;
    while (*input!='\0')
    {   
        
        if(*input>='0'&& *input<='9')
        {
            uint8_t temp= *input-'0';
            number=10*number+temp;
            input++;
            continue;
        }else if(*input=='+'||*input=='-'||*input=='*'||*input=='/')
        {
            output[i].key=OPERATOR;
            output[i].value.operator=*input;
            i++;
        }
        else
        {
            if(number!=0)
            {
                output[i].key=NUMBER;
                output[i].value.number=number;
                number=0;
                i++;
            }
        }
        
        input++;
        
    }
    output[i].key=NUMBER;
    output[i].value.number=number;
    
    
}

void remove2PhanTu(TypeMaths output[],int n,int vitri){
    for(int i=vitri;i<n-1;i++){
        output[i].value.operator=output[i+2].value.operator;
        output[i+1].value.number=output[i+3].value.number;
        
    }
    n-=2;
}


void tinhtoan(char *input)
{
    int n=30;
    TypeMaths output[n];
    stringtoDec(input,output);

    int tong=0;
    if (output[0].key==NUMBER )
        {
            tong=output[0].value.number;
        }
    ///////////////////////////nhan va chia
    for (int i = 0; i < n; i++)
    {   
        
        if (output[i].key==OPERATOR)
        {
            if (output[i].value.operator=='*')
            {
                output[i - 1].value.number=output[i-1].value.number*output[i+1].value.number;
                remove2PhanTu(output,n,i);
                i--;
            }else if (output[i].value.operator=='/')
            {
                if (output[i+1].value.number!=0)
                {
                     output[i - 1].value.number=output[i-1].value.number/output[i+1].value.number;
                     remove2PhanTu(output,n,i);
                     i--;
                }
            } 
                   
        }             
    }
    ///////////////// cong va tru
    for (int i = 0; i < n; i++)
    {
        if (output[i].key==OPERATOR)
        {
            if (output[i].value.operator=='+')
            {
               tong=tong+ output[i+1].value.number;
            }else if (output[i].value.operator=='-')
            {
                tong=tong- output[i+1].value.number;
            }  
        }
        
    }
    
    printf("gia trinh sau tinh toan: %d",tong);
}

