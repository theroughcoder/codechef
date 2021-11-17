#include <iostream>
using namespace std;

    int sum(int a) {
        int b = 0;
        for(int i = 0; i < a; i++) {
            b += i + 1; 
        }

        return b;
    }
int main() {
    int T;

    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int D, total = 0;
        cin >> D;
        for(int i = 0; i < D; i++) {
            total = total + sum(i + 1);
        }
      cout << total << endl;
    }

}