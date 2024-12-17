#include<iostream>
using namespace std;
int main(){
     int arr[2]={1,5};
     int *ptr=&arr[0];
     cout<<*++ptr<<"\n";      //*++ptr this will first increment the pointer and then dereference it
     cout<<arr[0]<<" "<<arr[1]<<"\n";
     cout<<++*ptr<<"\n";      //++*ptr this will first dereference the pointer and then increment it which will reflect in the array also
     cout<<arr[0]<<" "<<arr[1];
}