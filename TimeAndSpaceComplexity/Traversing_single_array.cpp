#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int sum1=0;
    for(int i=0;i<=n;i++){   //3n
        sum1+=arr1[i];
    }
    cout<<sum1;
    return 0;
}

//result = O(n) Time complexity