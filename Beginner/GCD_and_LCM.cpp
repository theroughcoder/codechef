#include <iostream>
using namespace std;

int main() {
    long int T, A, B, A2, B2, GCD, LCM;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;

        if(A > B) A2 = B, B2 = A;
        else A2 = A, B2 = B;

        while(A2 != 0){
            int s = A2;
            A2 = B2 % A2;
            B2 = s; 
        }
        GCD = B2;

        LCM = GCD * (A / GCD) * (B / GCD);
        cout << GCD << " " << LCM << endl;
        
    }

}