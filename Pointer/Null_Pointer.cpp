//This pointer point to some fixed null location thus making it easy to use when required after some time
#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;   // declared Null
    int *ptr1=0;     // different ways of declared Null
    // int *ptr2='\0';  // different ways of declared Null
    cout<<ptr<<" "<<ptr1;
    return 0;
}