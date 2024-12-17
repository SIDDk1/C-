#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=4;
    arr[0][2]=15;
    arr[1][0]=14;
    arr[1][1]=17;
    arr[1][2]=11;
    for(int i=0;i<2;i++){   //rows
        for(int j=0;j<3;j++){  //cols
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}