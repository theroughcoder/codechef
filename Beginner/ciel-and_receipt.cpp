#include <iostream>
using namespace std;

int main() {
    int T, P;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> P;
        int count = 0;
        while(P > 0) {
            if(P >= 2048) P -= 2048;
            else if(P >= 1024) P -= 1024;
            else if(P >= 512) P -= 512;
            else if(P >= 256) P -= 256;
            else if(P >= 128) P -= 128;
            else if(P >= 64) P -= 64;
            else if(P >= 32) P -= 32;
            else if(P >= 16) P -= 16;
            else if(P >= 8) P -= 8;
            else if(P >= 4) P -= 4;
            else if(P >= 2) P -= 2;
            else  P -= 1;

            count++;
        }
        cout << count << endl;
      
    }

}