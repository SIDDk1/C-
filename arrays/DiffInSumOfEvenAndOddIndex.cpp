#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,5,6,9,2};
int n=sizeof(arr)/4;
int sum_even=0;
int sum_odd=0;
for(int i=0;i<n;i++){
    if(i%2==0) sum_even+=arr[i];
    else sum_odd+=arr[i];
}
int difference=sum_odd-sum_even;
cout<<difference; 
}
