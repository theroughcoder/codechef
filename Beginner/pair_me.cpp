#include <iostream>
using namespace std;

int main() {
    int T, x, y, z;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> x >> y >> z; 
        if (x > y && x > z && x == y + z) cout << "YES" << endl;

        else if ( y > x && y > z && y == x + z) cout << "YES" << endl;
        
        else if ( z > x && z > y && z == x + y) cout << "YES" << endl;
         else cout << "NO" << endl;
    }

}