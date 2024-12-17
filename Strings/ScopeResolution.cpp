#include<iostream>
using namespace std;
int n =9;
int main(){
    int n=10;
    cout<<n<<endl;
    cout<<::n;   //SCOPE RESOLUTION "::" IS USE TO ACCESS GLOBAL VARIABLES WITHIN LOCAL
}