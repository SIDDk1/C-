#include<iostream>
using namespace std;
int main() {
    string s="My name is siddharth";
    cout<<s<<endl;
    s.append(" kaushik");
    cout<<s<<endl;
    s.push_back('b');
    cout<<s<<endl;
    s.push_back('n');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    cout<<s<<endl<<s.length()<<endl;
    s.clear();
    cout<<s<<s.length()<<endl;
    
}