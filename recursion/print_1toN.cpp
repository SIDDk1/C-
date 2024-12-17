#include<iostream>
using namespace std;
void greet(int x,int y){
    if(x>y) return;
    cout<<x<<endl;
    greet(x+1,y);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    greet(1,n);
}