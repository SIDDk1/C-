#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"power of num: ";
    cin>>b;
    int power=1;
    for(int i=1;i<=b;i++)
        if(b==0){
            power=1;
        }
        else{
        power*=a;
        }
    cout<<"power of num is "<<power;
}