#include<iostream>
#include<array>
#include<climits>
#include<algorithm>
using namespace std;
bool arraySum(int arr[],int n,int x){
    int i=0;   //to iterate for first sum
    int j=(n-1);   //to iterate for second sum
    while(i<j){
    if(arr[i]+arr[j]==x){
    return true;
     break;
    }
    else if(arr[i]+arr[j]<x){
        i++;
    }
    else{
        j--;
    }
}
if(arr[i]+arr[j]!=x){
    return false;
}
}
int main(){
    int n=8;
    int x= 7;
    int arr1[]={-2,-1,0,3,6,8,11,19}; 
    if(arraySum(arr1,n,x)){
        cout<<"Yes, there are two elements in the array that sum up to "<<x<<endl;

    }
    else{
        cout<<"No, there are no two elements in the array that sum up to "<<x<<endl;
    }
    return 0; 
}