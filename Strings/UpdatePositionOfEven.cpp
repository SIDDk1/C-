#include<iostream>
using namespace std;
int main() {
    string s="My name is siddharth";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]%2==0) s[i]='a' ;
    }
    cout<<s;
}