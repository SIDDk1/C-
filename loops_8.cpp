#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter number: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<"hello"<<endl;
    // }


    // int n;
    // cout<<"enter number: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }


//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2==0) cout<<i<<endl;
    
// }



//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) cout<<i<<endl;
    
// }

//   int n; 
//     for(int i=19;i<=190;i++){
//         if(i%19==0) cout<<i<<endl;
    
// }


//   int n;
    
//     for(int i=19;i<=190;i=i+19){
//         if(i%19==0) cout<<i<<endl;
    
//}


// int n;
// cout<<"enter number: ";
// cin>>n;
// for(int i=1;i<=2*n-1;i=i+2){
//     cout<<i<<endl;
// }


// int n;
// cout<<"enter number: ";
// cin>>n;
// int a=1;
// for(int i=1;i<=n;i++){
//     cout<<a<<endl;
//     a=a*2;
// }


// int n;
// cout<<"enter number: ";
// cin>>n;
// int a=3;
// for(int i=1;i<=n;i++){
//     cout<<a<<endl;
//     a=a*4;
// }


// int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//     cout<<i<<endl;
//     }

// int n;
// cout<<"enter number: ";
// cin>>n;
// int a=1;
// for(int i=1;i<n;i++){
//     if(n%i==0){
//     a=i;
// }
// }
// cout<<a;


// int n;
// cout<<"enter number: ";
// cin>>n;
// int a=1;
// for(int i=n/2;i>=1;i--){
//     if(n%i==0){
//     a=i;
//     cout<<a;
//     break;
// }
// }



// int n;
// cout<<"enter number: ";
// cin>>n;
// for(int i=1;i<n;i++){
//     if(n%i==0){
//         cout<<"number is  composite"; 
//         break;  
// }
//     else{
//         cout<<"number is not composite";
//         break;
//     }
// }


// int n;
// cout<<"enter number: ";
// cin>>n;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         cout<<"number is not prime"; 
//         break;  
// }
//     else{
//         cout<<"number is  prime";
//         break;
//     }
//}


// int n;
// cout<<"enter number: ";
// cin>>n;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         cout<<"number is composite"; 
//         break; 
//         }
//     else{
//         cout<<"number is  prime";
//         break;
//     }
// }
// if (n==1) cout<<"neither prime nor composite";


// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int i=1;i<=n;i++){
//     if(i==3) continue;
//     if(i==8) continue;
//     cout<<i<<endl;

// }



// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int i=1;i<=n;i++){
//     if(i%2==0) continue;
//     cout<<i<<endl;

// }



//WHILE LOOP


// int i=1;
// while(i<=10){
//     cout<<i<<endl;
//     i++;
// }


//DO WHILE



// int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }
// while(i<=10);


// int n;
// cout<<"enter a number: ";
// cin>>n;
// int count = 0;
// while(n!=0){
//     n =n/10;        //count number of string
//     count++;
// }
// cout<<count; 
// }


// int n;
// cout<<"enter a number: ";
// cin>>n;
// int sum= 0;
// while(n!=0){
//     int ld=n%10;
//     n /= 10;
//     sum +=ld;
// }
// cout<<"sum of number is: "<<sum; 


// int n;
// cout<<"enter a number: ";
// cin>>n;
// int product= 1;
// while(n!=0){
//     int ld=n%10;
//     n /= 10;
//     product *=ld;
// }
// cout<<"product of number is: "<<product; 


// int n;
// cout<<"enter a number: ";
// cin>>n;
// int sum= 0;
// while(n!=0){
//     int ld=n%10;
//     if(ld %2==0){
//     sum +=ld;
//     }
//     n /= 10;
// }
// cout<<"sum of even number is: "<<sum;





// int n;
// cout<<"enter a number: ";
// cin>>n;
// int count = 0;
// int rev=0;
// while(n!=0){ 
//     int ld=n%10;
//     rev=rev*10+ld;    
//     n =n/10;
    
// }
// cout<<"reverse of the number is: "<<rev;




// int n;
// cout<<"enter a number: ";
// cin>>n;
// int count = 0;
// int rev=0;
// int sum=0;
// int y;
// y = n;
// while(y!=0){ 
//     int ld=y%10;
//     sum += ld;
//     rev=rev*10+ld;    
//     y =y/10;
// }
// cout<<"sum of given num and reverse num is: "<<n+rev;



// int n;
// cout<<"enter a number: ";
// cin>>n;
// int product= 1;
// for(int i=1;i<=n;i++){
//     product *= i;
//     cout<<"factorial of number i is: "<<product<<endl;
// }


int n;
n =65;
while(n<=90){
char y = (char)n;
cout<<"ascii value of the number "<< n<< " is: "<<y<<endl;
n++;

}


}





