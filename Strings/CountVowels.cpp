#include<iostream>
using namespace std;

    int main() {
     string s="My name is siddharth he is the Gate 2025 pAper tOpper in data science and artificial intelligence paper ";

    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        count++;
    }
    cout<<"Total vowels characters in the given string are: "<<count;
    }