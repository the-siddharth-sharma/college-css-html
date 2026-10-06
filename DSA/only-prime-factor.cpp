#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
      for (int x=2; x<=n; x++){
        int i = 2;
        for (; i*i<=x; i++){
                 if (x%i==0) {break;}
               }
    if (i*i>x && n%x==0) cout<<x<<" ";

}

    return 0;
}