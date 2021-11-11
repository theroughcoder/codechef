#include <iostream>
using namespace std;

int main() {
    int T, E, K;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> E >> K;
        int  R = 0;

        while (true) {
             E /= K;
             R++;

            if (E == 0){
                break;
            }
        }
        cout << R << endl;      
    }

}