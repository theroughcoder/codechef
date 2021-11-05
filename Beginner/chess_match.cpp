#include <iostream>
using namespace std;

int main() {
    int T, N, A, B, TD;
    
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> N >> A >> B;

        TD = (360  + 2 * N) - (A + B);
        cout << TD;
    }

}