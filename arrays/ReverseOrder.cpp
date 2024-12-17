#include<iostream>
#include<climits>
using namespace std;
int main(){
int a[]={4,34,56,756,334,543,3};
int n=sizeof(a)/4;
int b[n];
for(int i=0;i<n;i++){
    int j=n-1-i;     //i+j=n-1
    b[i]=a[j];
    cout<<b[i]<<" ";
}
}