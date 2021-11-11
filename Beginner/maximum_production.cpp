#include <iostream>
using namespace std;

int main() {
    int T, d, x, y, z;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> d >> x >> y >> z;
        int p1 , p2;
        p1 = x * 7;
        p2 = (d * y) + (7 - d) * z;

        if (p1 < p2) cout << p2 << endl;
        else cout << p1 << endl; 
      
    }

}
