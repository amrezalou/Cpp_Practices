#include <iostream>
using namespace std;

int main() {

    float gal, mile;
    int user;
    int counter = 0;
    float total = 0;

    while (true) {

        cout << "end (-1) continue (1)? ";
        cin >> user;

        if (user == -1)
            break;

        cout << "gallon? >>> ";
        cin >> gal;

        cout << "miles? >>> ";
        cin >> mile;

        if (gal == 0) {
            cout << "Cannot divide by zero. Skipping this entry." << endl;
            continue;
        }

        counter += 1;
        float current_mpg = mile / gal;
        total += current_mpg;
        cout << "miles / gallon = " << current_mpg << endl;
    }

    if (counter == 0) {
        cout << "No valid entries provided." << endl;
    } else {
        cout << "The overall mile / gallon is: " << total / counter << endl;
    }

    return 0; // ended successfully
}










