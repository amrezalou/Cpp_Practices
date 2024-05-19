#include <iostream>
using namespace std;

int main () {

    cout << "N" << '\t' << "N*10" << '\t' << "N*100" << '\t' << "N*1000" << endl;
    for (int i = 0; i < 6; i++) {
        cout << i << '\t' << i*10 << '\t' << i*100 << '\t' << i*1000 << endl;
    }

    return 0;

}
