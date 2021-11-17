#include <iostream>
using namespace std;

int main() {
    int T;
    
    cin >> T;
    int N;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int A = 0, M = N;

        for(int i = 0; M != 0; i++) {

            A = (A * 10) + M % 10;  
            M /= 10;

        }
    if(N == A) cout << "wins" << endl;
    else cout << "loses" << endl;
    }

}