#include <iostream>
using namespace std;

int main() {
    int T, N;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int A[N], max = 0;
        for(int i = 0; i < N; i++) {
            cin >> A[i];
            if(A[i] > max) max = A[i];
        }
        int B[max + 1] = {0};
        for(int i = 0; i < N; i++) {
            B[A[i]] += 1; 
        }

        for(int i = 1; i <= max; i++) {
            if(B[i] % 2 != 0) cout << i << endl;
        }
      
    }

}