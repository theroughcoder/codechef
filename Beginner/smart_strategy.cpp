#include <iostream>
using namespace std;

int main() {
    int T, N, Q;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> Q;
        int d = 1;
        long int D[N];
        long int X[Q];
        long int highest = 0;
        bool A = true;
        for(int j = 0; j < N; j++) {
            cin >> D[j];
        }
        for(int j = 0; j < Q; j++) {
            cin >> X[j];
            if(highest < X[j]){
                 highest = X[j];
            }
        }
     
        for(int j = 0; j < N; j++) {
            if(d < highest){
            d *= D[j];
            } else {A = false;
             break;
             }
        }

        if(A) {
             for(int k = 0; k < Q; k++) {
                X[k] = X[k] / d;
                cout << X[k] << " ";
            }
        } else {
             for(int k = 0; k < Q; k++) {
                cout << "0" << " ";
            }
        }
        
        cout << endl;
      
    }

}