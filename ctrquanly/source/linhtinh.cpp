#include<iostream>

using namespace std;
string nhapmonan(){

    string name;
    int i=0;
    do
    {
        cout<<"nhap ten mon an: ";
        
        getline(cin,name);
        int n=0;
        for( char item:name){
            if((item<'a' || item>'z') && (item<'A' || item>'Z' )&& item !=' '&& (item < '0'|| item > '9')){
            n++;
            }
        }
        if (n!=0){
            cout<<"vui long khong su dung ky tu dac biet khi dat ten cho mon an"<<endl;
        
        }else i=1;
    } while (i==0);
    return name;
}
int main(){

    string monan;
    monan=nhapmonan();

    cout<<monan<<endl;

    return 0;
}