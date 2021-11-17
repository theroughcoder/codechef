#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T, N;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int M = 0;
        
        while(N > 0){
            M = M * 10 + (N % 10) ;
            N /= 10;
            
        }
        cout << M << endl;

      
    }

}