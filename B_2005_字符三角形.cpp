#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            if(i == 1 && j == 3) {
            cout << n;
            }

            if(i == 2 && j != 1 && j != 5) {
                cout << n;
            }

            if(i == 3) {
                cout << n;
            }
            
        }

        cout << endl;
    }
    return 0;
}