#include <iostream>
using namespace std;

int main() {
    int T, M, X, r;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> M >> X;
        r  = M / X;
        cout << r;
    }

}