#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[2][2];
    cout<<"Enter num for matrices";
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    }
}
int mx=INT_MIN;
    for(int i=0;i<2;i++){  //rows
    
        for(int j=0;j<2;j++){  //cols
        if(arr[i][j]>mx) mx=arr[i][j];
        }
    cout<<"max value in row "<<i<<" is "<<mx<<" ";
        cout<<endl;
    }
}