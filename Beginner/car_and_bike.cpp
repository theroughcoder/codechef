#include <iostream>
using namespace std;

int main() {
    int T, N;
    
    cin >> T;
        for(int i = 0; i < T; i++) {
        cin >> N ;

        if(N % 4 != 0) {
            N = N % 4;
            if(N == 2) cout << "YES" << endl;
            else cout << "NO" << endl;

            
         }

        else cout << "NO" << endl;

    }


}