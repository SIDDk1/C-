#include<iostream>
using namespace std;
void greet(int n){
    if(n==0)   return ;
    cout<<n<<endl;
    greet(n-1);
    
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    greet(n);
}