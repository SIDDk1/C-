#include<iostream>
#include<array>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n=8;
    int x= 7;
    int count=0;
    int arr1[]={-4,0,1,3,4,8,9,19}; 

    int i=0;   //to iterate for first sum
    int j=(n-1);   //to iterate for second sum
    while(i<j){
    if(arr1[i]+arr1[j]==x){
    count++;
    i++;
    j--;
    }
    else if(arr1[i]+arr1[j]<x){
        i++;
    }
    else{
        j--;
    }
}
if(arr1[i]+arr1[j]!=x){
    cout<<"no such pairs";
}
else{
    cout<<"Total number of pairs are: "<<count;
}
}