#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s="SIDDHARTH";
    int n=s.length();
    // int i=0;
    // int j=n-1;
    // while(i<j){
    //     int temp=s[i];
    //     s[i]=s[j];
    //     s[j]=temp;
    //     i++;
    //     j--;
    // }
    // cout<<s;

    reverse(s.begin(),s.end());
    cout<<s<<endl;
}