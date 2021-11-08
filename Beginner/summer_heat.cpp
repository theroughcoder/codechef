#include <iostream>
using namespace std;

int main() {
    int T, x, y, X, Y, total;
    
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> x >> y >> X >> Y;

        total = (X / x) + (Y / y);
        cout << total << endl;
    }

}