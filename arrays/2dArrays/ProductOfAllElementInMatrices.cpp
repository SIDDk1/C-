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
int product=1;
    for(int i=0;i<2;i++){  //rows
        for(int j=0;j<2;j++){  //cols
        product*=(arr[i][j]);
        }
    }
    cout<<"Sum of elements in matrix is "<<product;
    return 0;
}