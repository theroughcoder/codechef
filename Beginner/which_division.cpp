#include <iostream>
using namespace std;

int main() {
    int T, R;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R;

        if(R >= 2000) cout << "1" << endl;
        else if (R >= 1600 && R < 2000) cout << "2" << endl;
        else  cout << "3" << endl;
      
    }

}