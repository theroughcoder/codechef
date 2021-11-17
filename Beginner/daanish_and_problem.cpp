#include <iostream>
using namespace std;

int main() {
    int T;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int A[10], K ;

        for(int i = 0; i < 10; i++) {
            cin >> A[i];
        }
        cin >> K;
        for(int i = 0; i < 10; i++) {
            int b = K;
            K = K - A[9 - i];
            A[9 - i] -= b; 
            if(K < 1 &&   A[9 - i] > 0) {
                cout << 10 - i << endl;
                break;
            } 
      
        }
    }

}