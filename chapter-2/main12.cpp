#include <iostream>
using namespace std;

int main () {

    // a few next programs belong to this program, so open the book and think a little more right unlike me :|))

    int number, facNum = 1;

    cout << "enter the number >> ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        facNum *= i;
    }

    cout << "the factorial of " << number << " is: " << facNum << endl;


    return 0; // womp womp
}