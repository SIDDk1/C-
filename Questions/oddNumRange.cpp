#include<iostream>
using namespace std;
int odd(int i ,int j){
    for(int n=i;n<=j;n++){
        if(n%2!=0) cout<<n<<" ";
    }
}
int main(){
    int l;
    cout<<"Enter starting number: ";
    cin>>l;
    int m;
    cout<<"Enter starting number: ";
    cin>>m;
    odd(l,m);
    return 0;
}