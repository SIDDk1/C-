//Normal way
//ans=0
// for(int i=x;i<=y;i++){
//     ans+=i
// }

//This formula will reduce time complexity

//Formula
//n=(y-x+1)
//a=x
//Result=(n/2)*(2a +(n-1)*d)

#include<iostream>
using namespace std;
int sum_in_ranga(int x,int y){
    int result=0;
    for(int i=x;i<=y;i++){
        result+=i;
    }
    return result;
}
        
int sum_in_range_optimized(int x,int y){
    int n= (y-x+1);
    int a= x;
    int result =(n*(2*a+(n-1)*1))/2;
    return result;
}
int main(){
    // cout<<sum_in_ranga(1,100000)<<endl;
    cout<<sum_in_range_optimized(2,6);
    return 0;
}
