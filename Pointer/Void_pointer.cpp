//These pointer can point to any datatype value
#include<iostream>
using namespace std;
int main(){
    float f=10.4;
    int x=10;
    // int *ptr=&f;   //Error because int ptr can not store float value
    void *ptr=&x;
    // cout<<*ptr;       //void pointer can not de-reference directly
    int *intergerPointer=(int *)ptr;    //that is why we need to type cast it to int *
    cout<<*intergerPointer<<'\n';
    return 0;
}