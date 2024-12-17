#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,5,6,6,34,23,767,23,4543,2};
int n=sizeof(arr)/4;
int count=0;
int num=6;
for(int i=0;i<n;i++){
    if(arr[i]>num) count++;
}
cout<<count; 
}