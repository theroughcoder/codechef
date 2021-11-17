#include <iostream>
using namespace std;

int main() {
    int T;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int A[7], good = 0, bad = 0;
        for(int i = 0; i < 7; i++ ) {
            cin >> A[i];

            if(A[i] == 1){
            good++;
        } else bad++;
        }
        
        

        if(good > bad) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

}