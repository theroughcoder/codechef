#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T, X;
    float Y, L;
    
    
        cin >> X >> Y;
        if(X % 5 == 0 && X <= Y) {
            L = Y - (float)X - .50;
            cout << setprecision(2) << fixed << L << endl;

        } else cout << setprecision(2) << fixed << Y  << endl;
      
    

}