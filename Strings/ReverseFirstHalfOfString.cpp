#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s="SIDDHARTH";
    int n=s.length();
    cout<<s;
    // reverse(s.begin(),s.begin()+3);
    // cout<<s<<endl;
    //  reverse(s.begin(),s.begin()+n/2);   //can also written as
    // cout<<s<<endl;
    int i=0;
    int j=(n/2)-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
}
cout<<s<<endl;
}   