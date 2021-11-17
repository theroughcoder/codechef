#include <iostream>
using namespace std;

int main() {
    long int T, N, K;
    
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> K;
        int L = 0, V = 0;
        for(int i = 2; i <= K; i++){
        
            if(N % i > L) {
                L = N % i;
            }
        }
        cout << L << endl;
    }

}