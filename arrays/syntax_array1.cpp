#include<iostream>
using namespace std;

int main() {
    // 5 integers 3 6 9 2 1
    int arr[5];
    cout<<"enter five number";
        for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    // arr[0]=3;
    // arr[1]=6;
    // arr[2]=9;
    // arr[3]=2;
    // arr[4]=1;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[4]<<endl;
    arr[3]=100;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }

}