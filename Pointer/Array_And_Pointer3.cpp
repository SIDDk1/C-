#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,2,3,4,5};
    int (*p)[5]=&arr;       // here (*p)[5]  is pointing towards full array
    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr;       
    return 0;
}