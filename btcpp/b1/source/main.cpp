#include<iostream>
#include<math.h>


using namespace std;

class rectangle
{
private:
    int8_t longOfRec;
    int8_t shortOfRec;
    typedef enum{
        RECG,
        SQUA,
    }TypeOfRec;
    TypeOfRec type;
public:
    rectangle(int8_t a,int8_t b);
    void TypeOfRectangle();
    float diagLineOfRec();
    int8_t periOfRec();
    int8_t acreageOfRec();

};

rectangle::rectangle(int8_t a,int8_t b)
{
    longOfRec=a;
    shortOfRec=b;
}

void rectangle::TypeOfRectangle(){
    if (longOfRec==shortOfRec)
    {
        type=SQUA;
        printf("hinh vua nhap la hinh vuong\n");
    }else {
        type=RECG;       
        printf("hinh vua nhap la hinh chu nhat\n");
    }
    
}

int8_t rectangle::periOfRec(){
    int8_t cv=2*longOfRec +2* shortOfRec;
    return cv;
}
int8_t rectangle::acreageOfRec(){
    int8_t dt=longOfRec*shortOfRec;
    return dt;
}
float rectangle::diagLineOfRec(){
    float dc=sqrt(longOfRec*longOfRec+shortOfRec*shortOfRec);
    return dc;
}


int main(){

    rectangle a(8,8);
    a.TypeOfRectangle();
    int cv= a.periOfRec();
    int dt=a.acreageOfRec();
    float dc=a.diagLineOfRec();
    printf(" chu vi la: %d \n",cv);
    printf(" dien tich la: %d \n",dt);
    printf(" duong cheo la: %f \n",dc);

    return 0;
}

