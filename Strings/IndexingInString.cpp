#include<iostream>
using namespace std;

    int main() {

        string s;
        cout<<"Enter a string: ";
        getline(cin, s); 
        cout<<s<<endl;
        s[0]='y';
        cout<<s<<endl;
        cout<<s.length();   //to check length of string

    }