#include <iostream>
using namespace std;

int main () {

    // getting two numbers as an inputs
    int number1, number2;

    cout << "enter the first number >>> ";
    cin >> number1;

    cout << "enter the second number >>> ";
    cin >> number2;

    // computing phase:

    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;

    return 0; // program finished status
}

