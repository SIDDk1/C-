#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    for(int i=0;i<=n;i++){       //n
        for(int j=0;j<=i;j++){   //i
        cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

//result = O(n*2) Time complexity