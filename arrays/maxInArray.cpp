#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[]={4,34,56,756,334,543,3};
int n=sizeof(arr)/4;
// int mx=arr[0];
int INT_MIN;
int mx= INT_MIN;   //INT_MIN is the smallest value of integer
for(int i=0;i<n;i++){
    // if(arr[i]>mx) mx=arr[i];   //also written as
    mx=max(mx,arr[i]);
}
cout<<mx; 
}