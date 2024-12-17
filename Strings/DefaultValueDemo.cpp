#include<iostream>
using namespace std;
void fun(int x,int j=100,int z=65){     //FILL DEFAULT VALUE FROM LEFT TO RIGHT
    cout<<x<<" "<<j<<" "<<z;
}
int main(){
    fun(10);
    return 0;
}