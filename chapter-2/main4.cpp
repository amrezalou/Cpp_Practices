#include <iostream>
using namespace std;

int main () {

    // decleration
    int counter = 0, largest = 0, number;

    // computing loop
    while (true) {

        cout << "Enter a number: ";
        cin >> number;
        ++counter;

        if (counter == 1) {
            largest = number;
        }
        else {
            if (number > largest) {
                largest = number;
            }
        }

        if (counter == 10) {
            cout << "The largest number entered is: " << largest << endl;
            break;
        }

    }

    return 0;
}
