#include<iostream>
using namespace std;
int area(int i){
    return (3.14159265359)*i*i;
}
int circumference(int i){
    return 2*(3.14159265359)*i;
}
int main(){
    int r;
    cout<<"enter radius of circle: ";
    cin>>r;
    cout<<"area of circle is: "<<area(r)<<endl;
    cout<<"circumference of circle is: "<<circumference(r)<<endl;
}