#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[]={34,56,756,334,543,3};
int n=sizeof(arr)/4;
int mn= INT_MAX;   //INT_MIN is the smallest value of integer
int smn= INT_MAX;
for(int i=0;i<n;i++){
    mn=min(mn,arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]!=mn) smn=min(smn,arr[i]);
}
cout<<smn; 
}