#include <iostream>
using namespace std;

int main () {

    // can you change that fucking ascii yap??

    for (int i = 1; i <= 10; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 10; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << endl;
    }

    cout << endl << endl;

    // try another shapes yourself . . . .

    return 0; // womp the bomb
}