#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int squares[n];  // Declare an array to hold squares of natural numbers

    // Calculate squares and store them in the array
    for (int i = 1; i <= n; i++) {
        squares[i - 1] = i * i;
    }

    // Print the array
    cout << "Squares of natural numbers till " << n << " are: ";
    for (int i = 0; i < n; i++) {
        cout << squares[i] << " ";
    }

    return 0;
}
