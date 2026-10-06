// Online C++ compiler (editor)
#include <iostream>
using namespace std;

long long fact(int n){
    long long ans = 1;
    for ( int i=1; i<=n; i++)
        ans*=i;
        return ans;
    
}

int main() {
    int n, r;
    cin>>n>>r;

    // Write C++ code here

  cout<<fact(n)/(fact(n-r)*fact(r))<<endl;
    return 0;
}