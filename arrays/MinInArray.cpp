#include<iostream>
using namespace std;
int main(){
int arr[]={4,34,56,334,543,1,3};
int n=sizeof(arr)/4;
// int mn=arr[0];
int INT_MAX;     //INT_MAX is the highest value of integer
int mn= INT_MAX;
for(int i=0;i<n;i++){
    // if(arr[i]<mn) mn=arr[i];   //also written as
    mn=min(mn,arr[i]);

} 
cout<<mn; 
}