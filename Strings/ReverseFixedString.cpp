#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s="SIDDHARTH";
    int n=s.length();
    cout<<s<<" ";
    reverse(s.begin()+2,s.begin()+5);
cout<<s<<endl;
}   