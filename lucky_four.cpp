#include <iostream>
using namespace std;

int main() {
    int T, a;
    
    cin >> T;
    int arr[T];

    for( int i = 0; i < T; i++) {
        int four = 0;
        cin >> arr[i];
        while(arr[i] >= 4 ) {
            a = arr[i] % 10;
            arr[i] = arr[i] / 10; 
            if(a == 4){
                four++;
            }
        }
        cout << four << endl;
    }

     

}