#include <iostream>
using namespace std;

int main() {
    int T, N, A, B ;
    string S;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> A >> B;
        int c1 = 0, c2 = 0, time;
    
        for (int i = 0; i < N; i++) {
            cin >> S[i];

            if (S[i] == '0' ) c1++ ;
            else c2++;
        }
        time = c1 * A + c2 * B;
        cout << time << endl;
    }
}