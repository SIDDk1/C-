#include<iostream>
using namespace std;
int main(){
    int x=18;
    float y=2.8;
    //creating a pointer that can store address of x;
    // as x is  an integar valiable , so we need a pointer
    //that can store address of integer type
    int *ptr = &x;     //*ptr store address of x
    cout<<"Address store inside ptr is : "<<ptr<<endl;
    cout<<"value store inside ptr is : "<<*ptr<<endl;   //dereferencing or accesing value store at the address

    //creating a pointer that can store address of y;
    // as y is  an float valiable , so we need a pointer
    //that can store address of float type
    float *ptrf = &y;     //*ptrf store address of y
    cout<<"Address store inside ptr is : "<<ptrf<<endl;
    cout<<"value store inside ptr is : "<<*ptrf<<endl;   //dereferencing or accesing value store at the address

    cout<<ptr<<endl<<ptrf<<endl;

    x=23;   //updating value of x
    cout<<"updated value of x is : "<<x<<endl;
    cout<<"ptr still pointing towards same memory  which is 23 instead of 18 - "<<*ptr<<endl;
    *ptrf=43.6;  //updating value using pointer
    int valueatY=*ptrf;
    cout<<"updated value of y is : "<<y<<endl;
    cout<<"ptr still pointing towards same memory  which is 43.6 instead of 2.8 - "<<valueatY<<endl;
} 