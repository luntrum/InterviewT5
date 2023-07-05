//////hướng đối tượng

#include<iostream>
#include<string>

class toanHoc{
    public:
        void tong(int a,int b);
        void tong(int a,int b,int c);
        int tong(int a,double b);

     //   var tong(var a,var b);
};

void toanHoc::tong(int a,int b){
    printf("tong a va b la: %d \n",a+b);
};
void toanHoc::tong(int a,int b,int c){
    printf("tong a va b la: %d\n",a+b+c);
};
int toanHoc::tong(int a,double b){
    return a +(int)b;
    //printf("tong a va b la: %d\n",a+b);

}
template<typename var>
var tong(var a,var b){

    return (var)(a+b);
}


int main(){
    toanHoc th;
    th.tong(5,7);
    th.tong(6,5,3);
    printf("tong a va b la: %d\n",th.tong(5,12.6));
    printf("tong a va b la: %f",tong(5.6,12.6));
    return 0;
}