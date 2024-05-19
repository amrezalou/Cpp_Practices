#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int number, c, bin = 0, count = 0;

    cout << "Enter binary number: ";
    cin >> number;

    while (number != 0) {
        int remainder = number % 10;
        bin += remainder * pow(2, count);
        number /= 10;
        count++;
    }

    cout << "Decimal equivalent is: " << bin << endl;

    return 0;
}
