#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// void sortZeroesAndOne(vector<int> &v){
//     int ZeroesCount=0;
//     for(int ele:v){
//         if(ele==0)
//             ZeroesCount++;
//     }

//     for(int i=0;i<v.size();i++){
//         if(i<ZeroesCount){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
    
// }


//OR


void SortByParity(vector<int> &v){
    int left_ptr=0;
    int right_ptr=(v.size()-1);

    while(left_ptr<right_ptr){
        if(v[left_ptr%2!=0]  && v[right_ptr%2==0]){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }

        if(v[left_ptr]%2==0){
            left_ptr++;
        }

        if(v[right_ptr%2!=0]){
            right_ptr--;
        }
    }
     cout<<endl;
}
int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    SortByParity(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;   
}