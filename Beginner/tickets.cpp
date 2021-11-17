#include <iostream>
using namespace std;

int main() {
    int T;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int flag = 1;
        string S;
        cin >> S; 
        for(int i = 2; i < S.size(); i++){
            if ( S[i - 2] != S[i] || S[i - 2] == S[i - 1]) {
                flag = 0;
                break;
            } 
        }
        if (S.size() == 2 && S[0] == S[1]) flag = 0;
      
        if(flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
}