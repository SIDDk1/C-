#include<iostream>
using namespace std;
void change(int arr[]){
    arr[2]=67;
}
int main(){
int arr[4]={4 ,6, 3, 2};
    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
change(arr);    //array pass by reference
    for(int i =0;i<=3;i++){
        cout<<arr[i]<<" ";
    }

}