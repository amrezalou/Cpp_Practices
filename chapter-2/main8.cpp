#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 5-digit number: ";
    cin >> num;

    int firstDigit = num / 10000;
    int secondDigit = (num % 10000) / 1000;
    int fourthDigit = (num % 100) / 10;
    int fifthDigit = num % 10;

    if (firstDigit == fifthDigit && secondDigit == fourthDigit) {
        cout << "The number " << num << " is a pun on the heart." << endl;
    } else {
        cout << "The number " << num << " is not a pun on the heart." << endl;
    }

    return 0;
}