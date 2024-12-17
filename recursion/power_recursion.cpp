#include<iostream>
using namespace std;
int power(int n,int i){
    if(i==0)   return 1 ;
    return n * power(n,i-1);
}
int main(){
    int n;
    cout<<"enter base: ";
    cin>>n;
    int i;
    cout<<"enter power: ";
    cin>>i;
    cout<<n<<" raised to the power "<<i<<" is "<<power(n,i);
}