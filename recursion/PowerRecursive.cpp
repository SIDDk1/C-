#include<iostream>
using namespace std;
int f(int p,int q){
    if(q==0) return 1;  //base case
    return p*f(p,q-1);
}
int main(){
    int result=f(3,4);
    cout<<result; 
}
//Time and space complexity is order of "q"