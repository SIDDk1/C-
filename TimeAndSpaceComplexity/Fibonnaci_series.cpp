#include<iostream>
using namespace std;

// int main() {
//     int n = 8;
//     int arr[n + 1];  // Adjusted size to n+1
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i <= n; i++) {  // Calculate Fibonacci values
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     cout << arr[n];  // Output the nth value
//     return 0;
// }



//result = O(n) Time complexity  O(n) Space complexity




int main() {
    int n = 8; // The index of the Fibonacci number we want
    int a = 0; // F(0)
    int b = 1; // F(1)
    int c = 0; // Variable to hold the current Fibonacci number

    // Calculate Fibonacci numbers up to F(n)
    for (int i = 2; i <= n; i++) {
        c = a + b; // Calculate the next Fibonacci number
        a = b;     // Update a to the previous b
        b = c;     // Update b to the current Fibonacci number
    }

    cout << c; // Output the nth Fibonacci number
    return 0;  // Return 0 to indicate successful completion
}

//Result = O(n)Time complexity   O(1)Space complexity

