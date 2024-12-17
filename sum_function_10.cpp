#include<iostream>
using namespace std;
int sum(int a,int b){
    // cout<<a+b;    can also be written as
    return a+b;
}
int main(){
    cout<<"enter first number: ";
    int a;
    cin>>a;
    cout<<"enter second number: ";
    int b;
    cin>>b;
    // sum(a,b);  can also be written as
    cout<<sum(a,b);
    // sum(7,4);
}