#include <iostream>
using namespace std;

int main () {

    // decleration
    int counter = 0, largest = 0, number, large = 0;

    // computing loop
    while (true) {

        cout << "Enter a number: ";
        cin >> number;
        ++counter;

        if (counter == 1) {
            largest = number;
        }
        else {
            if (number > largest){
                large = largest; // Store the previous largest number in large
                largest = number; // Update the largest number
            } else if (number > large) {
                large = number; // Update the next largest number
            }
        }


        if (counter == 10) {
            cout << "The largest number entered is: " << largest << endl;
            cout << "and the next largest number is: " << large << endl;
            break;
        }

    }

    return 0;
}

