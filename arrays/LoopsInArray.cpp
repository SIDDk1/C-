#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);

    
    //FOR LOOP
    // for(int i=0;i<n;i++){   
    //     cout<<arr[i]<<" ";
    // }


    //FOR EACH LOOP
    // for(int element:arr){
    //     cout<<element<<" ";
    // }

    //WHILE LOOP
    // int index=0;
    // while(index<n){
    //     cout<<arr[index]<<" ";
    //     index++;
    // }


    //INPUTS IN LOOP

     //FOR LOOP
    int arr[5];
    cout<<"Enter 5 numbers: ";  //INPUTS FROM USERS
    // for(int i=0;i<5;i++){   
    //     cin>>arr[i];
    // }

    // for(int i=0;i<5;i++){   
    //     cout<<arr[i]<<" ";
    // }



    //FOR EACH LOOP
    for(int &element:arr){     //WE ARE USING AMPERCENT HERE FOR STORING VALUES IN THE ARRAY ITSELF 
        cin>>element;
    }

    for(int element:arr){
        cout<<element<<" ";
    }

    


}