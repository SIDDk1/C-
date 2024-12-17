#include<iostream>
using namespace std;
int main(){
int arr[4][2]={{12,78},{4,87},{1,98},{5,76}};   //can also written as arr[][3]

      for(int i=0;i<4;i++){   //rows
        for(int j=0;j<2;j++){  //cols
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}