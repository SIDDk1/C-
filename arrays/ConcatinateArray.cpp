#include<iostream>
#include<array>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n=4;
    int m=8;
    int arr1[]={1,6,7,10}; 
    int arr2[]={0,1,3,8,11,12,15,18};       
  
    //code to merge two sorted array
    int result[m+n];
    int i=0;  //will help us to iterate on arr1
    int j=0;  //will help us to iterate on arr2
    int k=0;  //will help us to iterate on result
    

    while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        result[k]=arr1[i];
        k++;
        i++;
    }
    else{
        result[k]=arr2[j];
        k++;
        j++;
    }
}

//if any element is left in arr1 or arr2, add them to result array
while(i<n){
    //arr2 exhausted
    result[k]=arr1[i];
    k++;
    i++;
}

while(j<m){
    //arr1 exhausted
    result[k]=arr2[j];
    k++;
    j++;
}

for(int i=0;i<(m+n);i++){
    cout<<result[i]<<" ";
}
return 0;

}