#include<iostream>
using namespace std;
int main(){
     int arr[2]={1,5};
     int *ptr=&arr[0];
     cout<<ptr<<" "<<*ptr<<"\n";
     cout<<(ptr+1)<<" "<<*(ptr+1)<<"\n";
     cout<<*ptr++<<"\n";       // *ptr++ this will first de-reference the pointer and return the value and then increment the pointer
     cout<<*ptr<<"\n";
     cout<<(*ptr)++<<"\n";     // (*ptr)++ this will first de-reference the pointer inside the braces and return the value and then increment the de-referenced value
     cout<<*ptr<<"\n"; // now the value of *ptr is 6 because we incremented it in the previous line
     cout<<arr[0]<<" "<<arr[1];
     return 0;
}