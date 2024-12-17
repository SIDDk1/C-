#include<iostream>
#include<array>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;
int SortedSquarArray(int arr[],int n,int x){
    int i=0;   //to iterate for first sum
    int j=(n-1);   //to iterate for second sum
    int k=(n-1);     //to iterate to store result
    int result[n];   //to store the result of squaring numbers
    while(i<=j && k>=0){
    if((abs(arr[i]))<abs((arr[j]))){
    result[k]=arr[j]*arr[j];
    j--;
    k--;
    }
    else{
       result[k]=arr[i]*arr[i];
       i++;
       k--;
    }
}
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}
}
int main(){
    int n=6;
    int x= 5;
    int arr1[]={-4,-3,-1,0,2,10}; 
    SortedSquarArray(arr1,n,x);
   
}