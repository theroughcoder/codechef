#include <iostream>
using namespace std;

int main() {
    int T, s1, s2, s3;
    
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> s1 >> s2 >> s3;

        if(s3 < s1 && s3 < s2) {
            cout << "Alice" << endl;
        }
        else if (s2 < s1 && s2 < s3) {
            cout << "Bob" << endl;
        } else cout << "Draw" << endl;
      
    }
}