#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of char: ";
    cin>>n;


    //UPPER TRIANGLE
    for(int line=1;line<=n;line++){               //UPPER TRIANGLE
        for(int space=0;space<n-line;space++){
        cout<<" ";
        }
      int no_of_char=2*line-1;
        for(int j=0;j<no_of_char;j++){
        cout<<(char)('A'+j);
    }
    cout<<endl;
    }   
    


    //LOWER TRIANGLE

    for(int line=(n+1);line<=2*n-1;line++){
        int no_of_space=(line-n);
        for(int k=1;k<=no_of_space;k++){
            cout<<" ";
        }

        int no_of_Char=2*(2*n-line)-1;
        for(int j=0;j<no_of_Char;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    
}
