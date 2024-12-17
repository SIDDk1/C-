#include<iostream>
using namespace std;
void greet(){
    cout<<"hello my name is siddharth"<<endl;
    cout<<"YES I am the GATE 2025 CS & IT topper"<<endl;
    return;
}

void INDIA(){
    cout<<"India is a fascinating country with rich history and rich culture."<<endl;
    cout<<"hello";
    greet();  //calling other function from another function
     return;    //function ends here
}

int main() {
greet();
cout<<"hello"<<endl;
greet(); 
INDIA();
}