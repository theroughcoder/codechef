#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;

    
    cin >> T;
    for (int i = 0; i < T; i++) {
    string S, S1, S2;
        cin >> S;
        int j = 0;
        while(j < S.length() / 2) {
            S1 += S[j];
            S2 += S[S.length() - 1 - j];  
            j++; 
        }

	    sort(S1.begin(),S1.end());
	    sort(S2.begin(),S2.end());
        
        
        if(S1 == S2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}