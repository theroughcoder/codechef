#include <iostream>
#include<bits/stdc++.h>

#include <iomanip>
using namespace std;

int main() {
     long int T, Q, P;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> Q >> P;
        double cost =  (Q * P);

        if(Q > 1000) {
            cost = cost - cost / 10;
        }


        cout << fixed << setprecision(6) << cost << endl;
      
    }

}