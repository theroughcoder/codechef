#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, n;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
         int first = 0, second = 0;

        cin >> n;
        int a[n];
        for( int j = 0; j < n; j++) {
            cin >>  a[j];
        }
        int n = sizeof(a) / sizeof(a[0]); 
        sort(a, a + n, greater<int>());

        //  for( int j = 0; j < n; j++) {
        //     cout << a[j];
        // }
    
        for( int j = 0; j < n; j++) {
            if(j == 0) {
                first += a[j];
            }
            else if (j == 1) {
                second += a[j];
            }
            else {
                if(j % 2 == 0) second += a[j];
                else first += a[j];
            }
        }
        if(first > second) cout << "first" << endl;
        else if (second > first) cout << "second" << endl;
        else cout << "draw" << endl;
     
    }

}