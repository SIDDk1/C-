#include<iostream>
using namespace std;
void process(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<"\n";
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\n";     //Both are same only syntax are different
    // }

    *(arr+1)=33;
}
int main(){
    int arr[3] ={15,12,6};
    process(arr,3);
    
    for(int i=0;i<3;i++){
        cout<<arr[i]<<"\n";    
    }
    return 0;
}