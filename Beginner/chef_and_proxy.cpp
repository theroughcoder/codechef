#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T, D;
    string S;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin>> D >> S;
        int present = 0, act = 0;
        float per, req;
 
        for (int j = 0; j < D; j++) {

            if(S[j] == 'P') {
                present++;
            }
        }

       
      int r = ceil(0.75 * D) - present;

        
        for(int j = 2; j < D - 2; j++) {

            if(S[j] == 'A') {
                if((S[j - 2] == 'P'|| S[j - 1] == 'P') && (S[j + 1] == 'P' || S[j + 2] == 'P')) {
                    act++;
                }
            } 
        }
        if(r > 0 && r <= act) {
            cout << r <<endl;
        } else if (r <= 0) {
            cout << 0 << endl;
        }else cout << "-1"<< endl;
    }
  


}