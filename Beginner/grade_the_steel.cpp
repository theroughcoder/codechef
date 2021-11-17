#include <iostream>
using namespace std;

int main() {
    int Test, H, T;
    float C;
    
    cin >> Test;
    for (int i = 0; i < Test; i++) {
    
        cin >> H >> C >> T;

        if(H > 50 && C < .7 && T > 5600) cout << "10" << endl;
        else if(H > 50 && C < .7 ) cout << "9" << endl;
        else if(C < .7 && T > 5600) cout << "8" << endl;
        else if(H > 50 && T > 5600) cout << "7" << endl;
        else if(H > 50) cout << "6" << endl;
        else if(C < .7) cout << "6" << endl;
        else if(T > 5600) cout << "6" << endl;
        else cout << "5" << endl;

      
    }

}