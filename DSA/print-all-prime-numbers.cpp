#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
      for (int x=2; x<=n; x++){
    bool flg = true;
            for (int i=2; i*i<=x; i++){
                 if (x%i==0) {flg=false; break;}
               }
    if (flg) cout<<x<<" ";
}

    return 0;
}
