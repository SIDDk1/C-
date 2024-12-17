#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;

// int largestElementIndex(int array[],int size){
//     int max=INT_MIN;
//     int maxIndex = -1;
//     for(int i=0; i<size; i++){
//         if(array[i] > max){
//             max=array[i];
//             maxIndex= i;
//         }
//     }
//     return maxIndex;
// }



//OR

 int SecondLargestelement(int array[],int size){
        int max=INT_MIN;
        int secondMax=INT_MIN;
        for(int i=0; i<size; i++){
            if(array[i] > max){
                max=array[i];
            }
        }
        for(int i=0;i<size;i++){
            if(array[i]!=max && array[i] > secondMax){
            secondMax=array[i]; 
            }   
        }
        return secondMax;
    }   

int main(){
    int array[]={2,3,7,7,6,1};
    int n=6;

    // int indexOfLargest=largestElementIndex(array,n);
    // cout<<"largest element in array is: "<<array[indexOfLargest]<<endl;
    // // array[indexOfLargest]=-1;
    // int largestElement=array[indexOfLargest];
    // for(int i=0;i<n;i++){     //LOOP TO OVERCOME DUPLICATE ELEMENTS 
    //     if(array[i]==largestElement){
    //     array[i]=-1;
    //     }
    // }

   
    // int IndexOfSecondLargest=largestElementIndex(array,6);
    //    cout<<"Second largest element in array is: "<<array[IndexOfSecondLargest];


   //OR

   cout<<SecondLargestelement(array,n);


   
}
