#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Please enter the amount: ";
    cin >> n;
    if (n>1000){
        cout << 0.1*n << endl;
    }
    else {
        cout << n << endl;
    }
    return 0;
    
}