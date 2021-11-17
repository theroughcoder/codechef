#include <iostream>
using namespace std;

int main() {
    int T, A, B, C;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C;
        if (A == 7) cout << "YES" << endl;
        else if (B == 7) cout << "YES" << endl;
        else if (C == 7) cout << "YES" << endl;
        else cout << "NO" << endl;
      
    }

}