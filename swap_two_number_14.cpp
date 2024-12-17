#include<iostream>
using namespace std;
int swap(int& a,int& b){    // & is use for using pass by value 
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}

int main(){
    int a,b,temp;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    swap(a,b);

    //with temp variable
    // temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<' '<<b;


    //without temp variable
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<' '<<b;
    // return 0;
 
} 