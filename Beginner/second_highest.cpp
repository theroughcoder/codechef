#include <iostream>
using namespace std;

int main() {
    int T, A, B, C;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C;

    if((A > B && B > C) || (C > B && B > A)) cout << B << endl;
    else if((B > C && C > A) || (A > C && C > B)) cout << C << endl;
    else cout << A << endl;
      
    }

}