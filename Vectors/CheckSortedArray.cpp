#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter 5 integers: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
bool sorted=true;   
    // for(int i=0;i<v.size();i++){
    //     if(v[i]>v[i-1]  && v[i]<v[i+1]){
    //         cout<<"Array is sorted";
    //     }
    // }


    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]  || v[i]>=v[i+1]){
           sorted=false;
        }
    }
    if(sorted){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
}