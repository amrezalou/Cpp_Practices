#include <iostream>
using namespace std;

int main () {

    // declare rhe variables:
    int number1, number2;

    // getting input numbers
    cout << "enter the value of number1: ";
    cin >> number1;

    cout << "enter the value of number2: ";
    cin >> number2;

    // computing phase:

    if (number1 > number2)
        cout << "the number1 is larger: " << number1 << " > " << number2 << endl;
    else if (number1 < number2)
        cout << "the number2 is larger: " << number2 << " > " << number1 << endl;
    else
        cout << "the numbers are equal: " << number1 << "=" << number2 << endl;

    return 0; // program finished.


}
