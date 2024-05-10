#include <iostream>
using namespace std;

int main () {
    // this program calcualtes the area and perimeter of a circle with r radius.

    float r;
    float pi = 3.14159;

    cout << "enter the value of cricles radius: ";
    cin >> r;

    cout << "P of circle with entered radius: " << 2 * pi * r << endl;
    cout << "A of circle with entered radius: " << pi * (r*r) << endl;

    return 0;

}
