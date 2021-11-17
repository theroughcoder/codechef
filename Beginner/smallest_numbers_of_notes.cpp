#include <iostream>
using namespace std;

int main() {
    int T, P;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> P;
        int count = 0;
        while(P > 0) {
            if(P >= 100) P -= 100;
            else if(P >= 50) P -= 50;
            else if(P >= 10) P -= 10;
            else if(P >= 5) P -= 5;
            else if(P >= 2) P -= 2;
            else  P -= 1;

            count++;
        }
        cout << count << endl;
      
    }

}