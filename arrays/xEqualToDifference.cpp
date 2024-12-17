#include<iostream>
#include<array>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;
bool arrayDifference(int arr[],int n,int x){
    int i=0;   //to iterate for first sum
    int j=(i+1);   //to iterate for second sum
    while(i<n && j<n){
    if((abs(arr[i]-arr[j]))==x){
    return true;
     break;
    }
    else if(abs(arr[i]-arr[j])<x){
        j++;
    }
    else{
        i++;
    }
}
if(abs(arr[i]-arr[j])!=x){
    return false;
}
}
int main(){
    int n=8;
    int x= 5;
    int arr1[]={-2,-1,0,3,6,8,11,19}; 
    if(arrayDifference(arr1,n,x)){
        cout<<"Yes, there are two elements in the array that Difference up to "<<x<<endl;

    }
    else{
        cout<<"No, there are no two elements in the array that Difference up to "<<x<<endl;
    }
    return 0; 
}