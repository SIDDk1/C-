#include<iostream>
#include<vector>
using namespace std;
void spiralOrder(vector<vector<int> >& matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;

    int direction = 0; 

    while(top <= bottom && left <= right) {
        //left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }  
            top++;
      }
      //top to bottom
      else if(direction==1){
        
        for(int row=top;row<=bottom;row++){
            cout<<matrix[row][right]<<" ";
      }
      right--;
}
      //right to left
      else if(direction==2){
        for(int col=right;col>=left;col--){
            cout<<matrix[bottom][col]<<" ";
        }
        bottom--;
      }
      //bottom to top
      else if(direction==3){
        for(int row=bottom;row>=top;row--){
            cout<<matrix[row][left]<<" ";
        }
        left++; 
      }

      direction = (direction+1)%4;

    }
}
    
int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    spiralOrder(matrix);
return 0;
}