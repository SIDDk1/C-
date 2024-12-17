#include<iostream>
using namespace std;
int main(){
cout<<"enter num: ";
int num;
cin>>num;
for(int line=0;line<num;line++){
    for(int j=0;j<num;j++){
        if(j==num/2 ){
            cout<<"*";
        }    
        else if(line==num/2){ 
            cout<<"*";
        }
        else {
            cout<<" ";
        }    
}
cout<<endl;
}
}

