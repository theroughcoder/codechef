#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int a[N];
         int n = sizeof(a) / sizeof(a[0]);
        for(int i = 0; i < N; i++) {
            cin >> a[i]; 
        }
        sort(a, a + n);


        cout << a[0] + a[1] << endl;
      
    }

}