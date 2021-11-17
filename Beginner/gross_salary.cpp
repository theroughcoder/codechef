#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T, Basic;
    float HRA, DA;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int squares = 0;
        cin >> Basic;
        
        if(Basic < 1500) {
            HRA = Basic / 10.00;
            DA = (Basic / 10.00) * 9.00;
        } 
        else {
            HRA = 500;
            DA = (Basic / 10.00) * 9.80;
        } 
        cout << fixed << setprecision(2) << Basic + HRA + DA << endl;
      
    }

}