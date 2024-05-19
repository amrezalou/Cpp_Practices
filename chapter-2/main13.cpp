#include <iostream>
using namespace std;

int main () {


    // first phase
    int number;
    int total = 0;
    int lim;

    cout << "enter a number valued as lenght: ";
    cin >> lim;

    for (int i = 1; i <= lim; i++) {
        cout << "enter a number >>> ";
        cin >> number;
        total += number;

    }

    cout << "total of numbers is: " << total << endl;

    return 0;
}