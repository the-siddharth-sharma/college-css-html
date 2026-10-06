#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            // ulte ke liye n-i+1
            // seedhe ke liye i
            // or sq ke liye n
            cout<<"*";
        }
    cout<<endl;
    }

    return 0;
}