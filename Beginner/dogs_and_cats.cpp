#include <iostream>
using namespace std;

int main() {
    long  T, C, D, L;
    long max, mini; 
     
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> C >> D >> L;

        max = (C + D) * 4;
        if(2 * D < C) {
            mini = ( D  + (C - (D * 2))) * 4;
        } else  mini = D * 4;

        if(L <= max && L >= mini && L % 4 == 0) {
            cout << "yes" << endl;
        } else cout << "no" << endl;
      
    }

}