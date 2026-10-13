#include <iostream>
using namespace std;

// Helper recursive function
void reverseHelper(int n, int& reversedNum) {
    // Base case: when the number becomes 0, stop recursion
    if (n == 0) {
        return;
    }
    
    // Extract the last digit and add it to the accumulated reversed number
    reversedNum = (reversedNum * 10) + (n % 10);
    
    // Recursive call with the remaining digits
    reverseHelper(n / 10, reversedNum);
}

// Main function to reverse an integer
int reverseInteger(int n) {
    int reversedNum = 0;
    reverseHelper(n, reversedNum);
    return reversedNum;
}

int main() {
    int n = 12345;
    cout << "Original: " << n << endl;
    cout << "Reversed: " << reverseInteger(n) << endl;
    return 0;
}
