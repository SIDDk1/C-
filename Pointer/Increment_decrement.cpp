#include<iostream>
using namespace std;
int main(){
    int x =20;
    double dec=40;
    int *ptr =&x;
    double *ptrd=&dec;
    cout<<"size of x is: "<< sizeof(x)<<"\n";
    cout<<"size of dec is: "<< sizeof(dec)<<"\n";
    cout<<ptr<<" "<<(ptr+1)<<" "<<(ptr-1)<<"\n";           //addition & decrement are based on hexadecimals
    cout<<ptrd<<" "<<(ptrd+1)<<" "<<(ptrd-1)<<"\n";         //addition & decrement are based on hexadecimals   
    return 0;
}