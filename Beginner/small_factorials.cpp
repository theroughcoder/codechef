#include <iostream>
using namespace std;

int main() {
    int T, n;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        long long int factorials = 1;
        cin >> n;
        while(n != 1){
            factorials *= n;
            n--;
        }
        cout << factorials << endl;
      
    }
}