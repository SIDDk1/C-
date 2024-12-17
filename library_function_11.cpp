#include<iostream>
#include<cmath>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
    f *=i;
    }
    return f;
}

int main(){

// cout<<sqrt(4)<<endl;
// cout<<cbrt(4)<<endl;
// cout<<pow(2,3)<<endl;
// cout<<max(5,9)<<endl;
// cout<<min(5,9)<<endl;


// combination


// int n;
// cout<<"enter n: ";
// cin>>n;

// int r;
// cout<<"enter r: ";
// cin>>r;
//  int a=1;
//  for(int i=1;i<=n;i++){
//     a *=i;
//  }

// int b=1;
//  for(int i=1;i<=r;i++){
//     b *=i;
//  }

// int c=1;
// for(int i=1;i<=n-r;i++){
//     c *=i;
//  }


//OR


// int n;
// cout<<"enter n: ";
// cin>>n;

// int r;
// cout<<"enter r: ";
// cin>>r;

// int a=fact(n);
// int b=fact(r);
// int c=fact(n-r);

// cout<<a/(b*c);


//permutation


int n;
cout<<"enter n: ";
cin>>n;

int r;
cout<<"enter r: ";
cin>>r;

int a=fact(n);
int c=fact(n-r);

cout<<a/c;




}