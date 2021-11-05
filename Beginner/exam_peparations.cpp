#include <iostream>
using namespace std;

int main() {
    int T, M, N, K;
    
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> M >> N >> K;

        if(N * K < M) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}