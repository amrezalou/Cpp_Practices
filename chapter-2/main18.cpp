#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int number, c, bin = 0, power = 0;

    cout << "Enter number >>> ";
    cin >> number;

    while (number != 0) {
        c = number % 2;
        bin += c * pow(10, power);
        number /= 2;
        power++;
    }

    cout << "Binary representation: " << bin << endl;

    return 0;
}
