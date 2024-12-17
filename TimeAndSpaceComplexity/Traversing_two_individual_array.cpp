#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int arr2[] = {1,2,3,12,7,11,34,9};
    int m=8;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=n;i++){   //3n
        sum1+=arr1[i];
    }

    for(int i=0;i<=m;i++){   //3m
        sum2+=arr2[i];
    }

    cout<<sum1<<" "<<sum2;
    return 0;
}

//ans = O(n+m)  Time complexity