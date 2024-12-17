//This pointer pointing to that variable that does not exist as X is not accessible outside the braces so this is dangling pointer
#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    {
        int x=10;
        ptr=&x;
    } 
    cout<<ptr;     
}