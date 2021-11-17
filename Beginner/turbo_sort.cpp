#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    
    cin >> T;
    int N[T];
    for (int i = 0; i < T; i++) {
        cin >> N[i];
    }
     int n = sizeof(N) / sizeof(N[0]); 
     sort(N, N + n);

    for (int i = 0; i < T; i++) {
        cout << N[i] << endl;
    }


}