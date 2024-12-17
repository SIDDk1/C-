#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int num=n;
     int reverse=0;
     while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
     }
     cout<<"reverse of digit "<<num<<" is "<<reverse;
}