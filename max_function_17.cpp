#include<iostream>
using namespace std;
int max_of_two(int x,int y){
    if(x>y) return x;
    else return y;
}
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    // cout<<max(a,b);
    cout<<max_of_two(a,b);
}