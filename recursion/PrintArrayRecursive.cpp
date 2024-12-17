#include<iostream>
using namespace std;
void f(int *arr,int idx,int n){
    if(idx==n) return;       //base case
    cout<<arr[idx]<<"\n";    //assume that
    f(arr,idx+1,n);   //assume it works correctly ->  it will print the remaining array 
}
int main(){
    int n=5;
    int arr[] ={1,2,3,4,5};
    f(arr,0,n);
    return 0;
}
//Time and space complexity is O(n) as we are traversing the array once and using a constant amount of space for the