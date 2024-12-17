#include<iostream>
using namespace std;
int main(){
    // int a;
    // cout<<"enter a number: ";   //even odd
    // cin>>a;
    // if(a%2==0){
    //     cout<<"number is even";
    //     }
    // // if(a%2!=0) cout<<"nunber is odd";
    // else{
    //     cout<<"nunber is odd";
    //     }


    // cout<<"enter a number: ";
    // cin>>a;
    // if(a>0){
    //     cout<<"number is absolute: "<<a;
    //     }
    // else{
    //     cout<<-a;
    //     }


    // int sp,cp;
    // cout<<"enter selling price: ";
    // cin>>sp;
    // cout<<"enter cost price: ";
    // cin>>cp;
    // if(sp>cp){
    //     cout<<"profit: "<<sp-cp;
    //     }
    // else if(sp<cp){
    //     cout<<"loss: "<<cp-sp;
    //     }
    // else{
    //     cout<<"no profit or loss";
    //     }

    // int n;
    // cout<<"enter a number: ";
    // cin>>n;
    // if(n>99 && n<1000){
    //     cout<<"it is a three digit number";
    // }
    // else{
    //     cout<<"it is not a three digit number";
    // }


    // int n;
    // cout<<"enter a number: ";
    // cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<" number is divisible by 5 & 3";
    // }
    // else{
    //     cout<<"number is not divisible by 5 & 3";
    // }


    // int n;
    // cout<<"enter a number: ";
    // cin>>n;
    // if(n%5==0 or n%3==0){
    //     cout<<" number is divisible by 5 or 3";
    // }
    // else{
    //     cout<<"number is not divisible by 5 or 3 both";
    // }

    // int a,b,c;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number: ";
    // cin>>b;
    // cout<<"enter third number: ";
    // cin>>c;
    // if((a+b)>c && (b+c)>a && (c+a)>b){
    //     cout<<"numbers can form a triangle";
    // }
    // else{
    //     cout<<"numbers cannot form a triangle";
    // }


    //   int a,b,c;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number: ";
    // cin>>b;
    // cout<<"enter third number: ";
    // cin>>c;
    // if(a>b && a>c){
    //     cout<<"the greatest number is: "<<a;
    // }
    // else if(b>c){
    //     cout<<"the greatest number is: "<<b;
    // }
    // else{
    //     cout<<"the greatest number is: "<<c;
    // }

    //     int n;
    // cout<<"enter a number: ";
    // cin>>n;
    // if((n%5==0 or n%3==0) and n%15!=0){
    //     cout<<" number is divisible by 5 or 3 and not divisible by 15";
    // }
    // else{
    //     cout<<"number is not divisible by 5 or 3 both or divisible by 15";
    //}

    // int a,b,c;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number: ";
    // cin>>b;
    // cout<<"enter third number: ";
    // cin>>c;
    // if(a>b){
    //     if(a>c){
    //         cout<<"the greatest integer is:"<<a;
    //     }
    //     else{
    //         cout<<"the greatest integer is:"<<c;
    //     }
    // }
    // else{
    //     if(b>c){
    //         cout<<"the greatest integer is:"<<b;
    //     }
    //     else{
    //         cout<<"the greatest integer is:"<<c;
    //     }
    // }
    

    // int n;
    // cout<<"enter the marks: ";
    // cin>>n;
    // if(n>=81 && n<=100){
    //     cout<<"very good";
    // }
    // else if(n>=61){
    //     cout<<"good";
    // }
    // else if(n>=41){
    //     cout<<"average";
    // }
    // else{
    //     cout<<"fail";
    // }



    // int a,b;
    // cout<<"enter first number: ";
    // cin>>a;
    // cout<<"enter second number: ";
    // cin>>b;
    // if(a<0 && b<0){
    //     cout<<"it is in 3rd quadrant";
    // }
    // else if(a>0 && b>0){
    //     cout<<"it is in 1st quadrant";
    // }
    // else if(a>0 && b<0){
    //     cout<<"it is in 2nd quadrant";
    // }
    // else if(a<0 && b>0){
    //     cout<<"it is in 4th quadrant";
    // }


    // //ternary operator
    // int n;
    // cout<<"enter number: ";
    // cin>>n;
    // (n%2==0)? cout<<"even number" : cout<<"odd number";

    // int n;
    // cin>>n;
    // char ch;
    // cin>>ch;
    // int y;
    // cin>>y;
    // if(ch=="+") cout<<n+y;
    // if(ch=='-') cout<<n-y;
    // if(ch=='*') cout<<n*y;
    // if(ch=='/') cout<<n/y;


    //USING SWITCH CASE

     int n;
    cin>>n;
    char ch;
    cin>>ch;
    int y;
    cin>>y;
    switch(ch){
        case'+':
            cout<<n+y<<endl;
            break;
        case'-':
            cout<<n-y<<endl;
            break;
        case'*':
            cout<<n*y<<endl;
            break;
        case'/':
            cout<<n/y<<endl;
            break;
        default :
            cout<<"invalid";
    
    }

}
    