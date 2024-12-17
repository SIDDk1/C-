#include<iostream>
using namespace std;
int fun(int &x){    //HERE WE ARE USING AMPERCENT "&" TO PASS BY REFERENCE
    x=100;
}
int main(){
    int a=50;
    fun(a);
    cout<<a;
    return 0;
}