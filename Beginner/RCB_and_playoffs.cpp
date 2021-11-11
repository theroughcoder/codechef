#include <iostream>
using namespace std;

int main() {
    int T, X, Y, Z;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> X >> Y >> Z;
        if ( Y <= X + Z * 2 ) cout << "YES" << endl;
        else cout << "NO" << endl;
      
    }

}