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
    cout<<"enter num that want you to find: ";
    cin>>x;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            cout<<x<<" found at index "<<i;
            return 0;
        }
    }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            cout<<x<<" found at index "<<i;
            
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=x){
            cout<<"num is not present in the vector";
            break;
}
    }
}