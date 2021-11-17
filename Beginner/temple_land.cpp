#include <iostream>
using namespace std;

int main()
{
    int S;

    cin >> S;
    for (int i = 0; i < S; i++)
    {
        int N, left = 0, right = 0;
        cin >> N;

        int H[N];
        for (int j = 0; j < N; j++)
        {
            cin >> H[j];
            if (j < (N - 1) / 2) { 
                if(H[j] != (j + 1)) {
                    left = 1;
                }
            }
            else if (j > (N - 1) / 2) {
                if (H[j] != (N - j)) {
                    right = 1;
                }
            }
        }
        if (N % 2 != 0){
            if (H[0] == 1 && H[N - 1] == 1 && left == 0 &&  right ==  0  ){
                cout << "yes" << endl;
            } else cout << "no" << endl;
        } else cout << "no" << endl;
    }
}