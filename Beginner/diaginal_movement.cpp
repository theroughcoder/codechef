#include <iostream>
using namespace std;

int main() {
    int T, C1, C2, diff;
    
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> C1 >> C2;

        diff = C1 - C2;

        if(diff % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}