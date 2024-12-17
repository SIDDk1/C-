#include<iostream>
using namespace std;
// bool prime(int j){
//     for(int n=2;n<=(j-1);n++){
//         if(j%n==0) return false;
//     }
//     return true;
//     }

bool prime_modified(int j){
    for(int n=2;n*n<=j;n++){    //m<=(sqrt)(j)
        if(j%n==0) return false;
    }
    return true;
    }
int main(){
    int l;
    cout<<"Enter starting number: ";
    cin>>l;
    int m;
    cout<<"Enter starting number: ";
    cin>>m;
    cout<<"prime numbers are: ";
    for(int i=l;i<=m;i++){
        if(prime_modified(i)){
            cout<<i<<" ";
        }
    }
}