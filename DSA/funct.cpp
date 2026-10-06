// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

long long fact(int n){
    long long ans = 1;
    for ( int i=1; i<=n; i++)
        ans*=i;
        return ans;
    
}

int main() {
    // Write C++ code here

  cout<<fact(15)<<endl;
    return 0;
}