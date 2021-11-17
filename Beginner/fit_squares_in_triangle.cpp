#include <iostream>
using namespace std;

int main() {
    int T, B;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int squares = 0;
        cin >> B;
        for(int i = 1; i < B / 2; i++) {
            squares += i; 
        }
        cout << squares << endl;
      
    }

}