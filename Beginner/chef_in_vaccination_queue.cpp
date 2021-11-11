#include <iostream>
using namespace std;

int main() {
    int T, N, P, X, Y ;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int time = 0; 
        cin >> N >> P >> X >> Y;
        int A[N];
        for (int j = 0; j < N; j++){
            cin >> A[j];
     
        }
        for (int j = 0; j < P; j++){
            if(A[j] == 0){
             time += X;
            } else time += Y; 
        }
        cout << time << endl;
      
    }

}