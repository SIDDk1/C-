#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int num=n;

    int sum=0;
    while(n>0){
        int lastdigit =n%10;
        sum+=lastdigit;
        n/=10;
        
    }
    cout<<"sum of digits in the number "<<num<<" is "<<sum;
    return 0;
}