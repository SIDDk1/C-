#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
        if(n==0|| n==1){
            fact=1;
        }
        else{
        fact*=i;
        }
    cout<<"factorial of num is "<<fact;
}