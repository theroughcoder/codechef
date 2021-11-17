#include <iostream>
using namespace std;

int main() {
    int H, x, y, C, r;

      int T;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> x >> y >> C;
    r = H * (x + y / 2);

    if( r <= C) cout << "YES" << endl;
    else cout << "NO" << endl;  
      
    }
    


}