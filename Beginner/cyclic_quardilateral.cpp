#include <iostream>
using namespace std;

int main() {
    int T, A, B, C, D;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C >> D;

        if ( A + C == 180) cout << "YES" << endl;
        else cout << "NO" << endl;
      
    }

}