#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
bool checkSuffixPrefixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }

    }
    return false;
}
int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       v.push_back(ele);
    }

    
    if(checkSuffixPrefixSum(v)){
        cout<<"prefix sum is equal to suffix sum";
    }
    else{
        cout<<"prefix sum is not equal to suffix sum";
    }
}