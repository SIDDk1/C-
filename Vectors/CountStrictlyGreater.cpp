#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter 5 integers: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter num that want you to count that is strictly greater: ";
    cin>>x;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"total numbers that are greater than "<<x<<"  is "<<count;
}