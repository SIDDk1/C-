#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<2;i++){    //rows
        for(int j=0;j<3;j++){    //cols
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}