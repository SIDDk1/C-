#include<iostream>
using namespace std;
int main(){
    int *ptr;    //only declaring the pointer
    cout<<ptr<<endl;
    int x = 10;
    ptr = &x;   //re-assignment / update
    // float *ptr = &x;   //float pointer can not take int variable         
    cout<<ptr;
} 