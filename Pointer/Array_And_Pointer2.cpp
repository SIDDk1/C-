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
    int arr[5] ={1,2,3,4,5};
    int *ptr=(arr+2);
    
    cout<<*ptr<<"\n";
    ptr++;
    cout<<*ptr<<"\n";
    ptr--;
    cout<<*ptr<<"\n";
    return 0;
}