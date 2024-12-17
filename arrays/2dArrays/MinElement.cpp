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
int mn=INT_MAX;
       for(int i=0;i<2;i++){  //rows
        for(int j=0;j<2;j++){  //cols
        if(arr[i][j]<mn) mn=arr[i][j];
        }
    cout<<"min value in row "<<i<<" is "<<mn<<" ";
        cout<<endl;
    }
}