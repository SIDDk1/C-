#include<iostream>
using namespace std;
int main(){
int arr[2][2];  
cout<<"enter four num for matrice: ";
      for(int i=0;i<2;i++){   //rows
        for(int j=0;j<2;j++){  //cols
            cin>>arr[i][j];
            
        }
    }

int arr2[2][2];
cout<<"enter four num for 2nd matrice: ";
      for(int i=0;i<2;i++){   //rows
        for(int j=0;j<2;j++){  //cols
            cin>>arr2[i][j];
            
        }
    }
    
int arr3[2][2];
      for(int i=0;i< 2;i++){   //rows
        for(int j=0;j<2;j++){  //cols
            arr3[i][j]=arr[i][j]+arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    
}
}