#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


//dry run
//0 5 1 2 3 4
// 0 5  6 8 11 15 -> prefix sum array
// l=1, r=3 
// ans= v[r]-v[l-1] = v[3]-v[0] =8-0 =0

//  l=2, r=5 
// ans= v[r]-v[l-1] = v[5]-v[2] =15-5 =10
int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    vector<int> v(n+1,0);    //n+1 because indexing is from 1 but not from 0
    for(int i=1;i<=n;i++){
    cin>>v[i];
    }

    //calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        //ans=prefixsumArray[r]- prefixSumArray[l-1]
        ans=v[r]- v[l-1]; 
        cout<<ans<<endl;
    }
}