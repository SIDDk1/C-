#include<iostream>
using namespace std;
int main(){
    int key=10;
    int arr[]={2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        if(arr[i]==key){
            cout<<"Element found at index "<<i<<endl;
            break;
        }
        i++;
}
if(arr[i]!=key){
            cout<<"Element not found at index ";
            
        }

  
}