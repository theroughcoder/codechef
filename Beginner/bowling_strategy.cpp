#include <iostream>
using namespace std;

int main() {
    int T, N, K, L;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> K >> L;
        if(N <= K * L) {
            for(int j = 0; j < N; j++) {
                cout << (j % K) + 1 << " "; 
            }
        } else cout << "-1" ; 
    cout << endl;
    }
}