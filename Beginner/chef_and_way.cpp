#include <iostream>
using namespace std;

int main() {
    int N, K ,p = 0;
    
    cin >> N >> K;
    int arr[N];
    int arr2[K];
    // int arr3[K];
    std::fill_n(arr2, K, 1);
    // std::fill_n(arr3, K, 1);

    for(int i = 0; i < N ; i++) {
        cin >> arr[i];
    
    
    }
    for(int i = 1; i < N -1 ; i++){
    
        arr2[(i - 1) % K] *= arr[i]; 
        // cout << arr2[(i - 1) % K] <<endl;
    
        
    }
    for(int i = 0; i < K ; i++) {
        cout << arr2[i] <<endl;
    }    
    for(int i = 0; i < K ; i++) {
        arr2[(i - 1) % K] *= arr[i]; 
    }    

}