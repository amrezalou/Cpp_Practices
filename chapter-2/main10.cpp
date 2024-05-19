#include <iostream>
using namespace std;

int main () {

    int x, y, z;

    cout << "enter three sides of triangle >> ";
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x)
        cout << "yes its triangle" << endl;
    else
        cout << "it not a triangle" << endl;


    return 0; // womp womp jajajaj
}