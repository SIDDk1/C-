#include<iostream>
using namespace std;
bool checkeligibility(int i){
    if(i>=18 && i<=60){
        return true;
}
else return false;
}
int main(){
int age;
cout<<"enter the age: ";
cin>>age;
int elidgible=checkeligibility(age);
if (elidgible){
    cout<<"yes elidigible to vote";
}
else cout<<"not elidigible to vote";
}