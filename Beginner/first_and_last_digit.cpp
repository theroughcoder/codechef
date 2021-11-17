#include <iostream>
using namespace std;

    int first(int n){
        for(int i = 0; i < n; i++){
            if(n > 9) n /= 10;
        } 
        return n;
    }
    int last(int n) {
        return n %= 10;
    }
int main() {
    int T, N;

    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
    cout << first(N) + last(N) << endl;
    }

}