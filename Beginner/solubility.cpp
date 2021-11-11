#include <iostream>
using namespace std;

int main() {
    int T, X, A, B, sugar;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> X >> A >> B;

        sugar = (A + (100 - X) * B) * 10;
        cout << sugar << endl;
      
    }

}