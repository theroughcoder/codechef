#include <iostream>
using namespace std;

int main() {
    int N;
    
    cin >> N;
    int s[N], t[N], r[N],p1 = 0, p2 = 0 , player = 0, cs = 0;
    for (int i = 0; i < N; i++) {
        cin >> s[i] >> t[i];
        p1 += s[i];
        p2 += t[i]; 
        r[i] = p1 - p2;
        if(cs < abs(r[i])) {
             cs = abs(r[i]);
             if (r[i] > 0) player = 1;
             else player = 2;
        }
    }
    cout << player << " " << cs << endl;


}