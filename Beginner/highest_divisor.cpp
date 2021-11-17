#include <iostream>
using namespace std;

int main() {
    int N, highestDivisor;
    
    cin >> N;
    for (int i = 1; i <= 10; i++) {
        if (N % i == 0) highestDivisor = i;
      
    }
    cout << highestDivisor << endl;

}