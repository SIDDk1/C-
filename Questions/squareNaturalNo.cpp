#include<iostream>
using namespace std;
int square(int i){
    return i*i;
 
}
int main(){
    int n=1;
    cout<<"first five square are as follows: ";
    while(n<=5){
        
        cout<<square(n)<<" ";
        n++;
}

}