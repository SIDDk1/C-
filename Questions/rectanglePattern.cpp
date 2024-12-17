#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter length: ";
    cin>>length;
    int breadth;
    cout<<"Enter breadth: ";
    cin>>breadth;
    for(int j=0;j<breadth;j++){
    for(int i=0;i<length;i++){
        cout<<"*";
    }
    cout<<"\n";
}

}