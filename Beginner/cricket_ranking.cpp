#include <iostream>
using namespace std;

int main() {
    int T, R1, R2, W1, W2, C1, C2;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int  A = 0, B = 0;
        cin >> R1 >> W1 >> C1 >> R2 >> W2 >> C2;
        if (R1 > R2) A++;
         else  B ++;

        if (W1 > W2) A++;
         else  B ++;

        if (C1 > C2) A++;
         else  B ++;

        if (A > B) cout << "A" << endl;
         else cout << "B" << endl;
    }

}