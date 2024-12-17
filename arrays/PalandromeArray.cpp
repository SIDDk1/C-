#include<iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4,3,2,1};
    int n = sizeof(a) / 4; // Calculate the size of the array
    int i = 0;
    int j = n - 1;

    // Check if the array is a palindrome
    while(i < j) { 
        if(a[i] != a[j]) {
            cout << "not palindrome"; // If a mismatch is found, print and exit
            return 0;
        }
        i++;
        j--;
    }

    cout << "palindrome"; // If no mismatch is found, it's a palindrome
    return 0; // Return 0 to indicate successful execution
}
