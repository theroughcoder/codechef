#include <iostream>
using namespace std;

int main() {
    int T, A, B, X, year;
    
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> A >> B >> X;
        year = (B - A) / X;
        cout << year << endl;
    }

}