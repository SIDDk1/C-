#include<iostream>
using namespace std;
int fun(int x){
    x=100;
}
int main(){
    int a=50;
    fun(a);
    cout<<a;
    return 0;
}