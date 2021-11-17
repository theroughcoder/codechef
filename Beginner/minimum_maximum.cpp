#include <iostream>
using namespace std;

int main() {
    int T;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        long int N;
        cin >> N;
         int A[N];
         int min = 100001;

        for (int j = 0; j < N; j++) {
            cin >> A[j];

            if(A[j] < min) min = A[j]; 
        }

        cout << min * (N - 1) << endl;

      
    }

}
