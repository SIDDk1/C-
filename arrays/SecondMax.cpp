#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[]={4,34,56,756,334,543,3};
int n=sizeof(arr)/4;
int mx= INT_MIN;   //INT_MIN is the smallest value of integer
int smx= INT_MIN;
for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]!=mx) smx=max(smx,arr[i]);
}
cout<<smx; 
}