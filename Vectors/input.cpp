#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"enter 5 integers: ";


    //FOR LOOP

     for (int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);

     }
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;

    //FOR EACH LOOP
     v.insert(v.begin()+2,9);
    for(int element:v){
        cout<<element<<" ";
    }
     cout<<endl;

   //WHILE LOOP
v.erase(v.end()-2);
   int index=0;
   while(index<v.size()){
      cout<<v[index]<<" ";
      index++;
   }



    
}