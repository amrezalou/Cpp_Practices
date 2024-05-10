#include <iostream>
using namespace std;

int main() {
    int number;

    // input phase
    cout << "Enter the number (len 3): ";
    cin >> number;

    int d1 = number % 10;
    number = number / 10;

    int d2 = number % 10;
    number = number / 10;

    int d3 = number % 10;

    cout << "The number is " << d3 << " " << d2 << " " << d1 << endl;

    return 0; // program finished successfully
}
