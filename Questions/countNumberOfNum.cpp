#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int num=n;

    int digit=0;
    while(n>0){
        digit++;
        n/=10;

    }
    cout<<"count of digits in the number "<<num<<" is "<<digit;
    return 0;
}