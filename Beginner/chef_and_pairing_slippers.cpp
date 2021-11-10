#include <iostream>
using namespace std;

int main() {
    int T, N, L, X, R, max;
    
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N >> L >> X;

       R = N - L;

       if (R < L){
           max = (L - (L - R)) * X;
       } else  max = (R - (R - L)) * X;

    cout << max << endl;
    }

}