//this pointer pointing to some garbage location thus making it difficult for to use it after some time when required
#include<iostream>
using namespace std;
int main(){
    int *ptr;   //only declared
    cout<<ptr<<" "<<*ptr;     
    
    return 0;
}