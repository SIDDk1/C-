#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,5,6,6,34,23,767,23,2};
int n=sizeof(arr)/4;
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<sum; 
}