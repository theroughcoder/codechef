#include <iostream>
using namespace std;

int main() {
    int T;
    char ID;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> ID;

        if(ID == 'B' || ID == 'b') cout << "BattleShip" << endl;
        else if(ID == 'C' || ID == 'c') cout << "Cruiser" << endl;
        else if(ID == 'D' || ID == 'd') cout << "Destroyer" << endl;
        else cout << "Frigate" << endl;
      
    }

}