#include <iostream>
using namespace std;

int main() {
    int T, N;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int flag = 1;

        for(int i = 0; i < N/2; i++) {
            if(N % i == 0) flag = 0;
        }
        if(flag = 1) cout << "yes" << endl;
        else cout << "no" << endl;
      
    }

}