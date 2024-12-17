#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two num: ";
    cin>>x>>y;
    int *ptr1=&x;    // &x fetching address of x and then store it in ptr1
    int *ptr2=&y;    // &x fetching address of x and then store it in ptr2 
    
    int result;  //declare result
     int *ptr_result=&result;

     *ptr_result=*ptr1+*ptr2;
     cout<<result<<" "<<*ptr_result<<endl;

    return 0;
}