#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;
    int array[n][m];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    cout<<"Entered Array of size "<<n<<" and "<<m<<" is: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}