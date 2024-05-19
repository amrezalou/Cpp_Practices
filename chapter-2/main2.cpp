#include <iostream>
using namespace std;

int main () {

    // all are logical
    float accountNumber, charge, firstBalance, totalCredit, creditLimit;

    while (true) {

        cout << "enter account number (-1 to end) >>> ";
        cin >> accountNumber;

        if (accountNumber == -1)
            break;


        cout << "beginning balance >>> ";
        cin >> firstBalance;

        cout << "total charges >>> ";
        cin >> charge;

        cout << "total credits >>> ";
        cin >> totalCredit;

        cout << "credit limit >>> ";
        cin >> creditLimit;


        cout << "account number: " << accountNumber << endl;
        cout << "credit limit: " << creditLimit << endl;
        float balance = firstBalance + totalCredit;
        cout << "balance(total): " << balance << endl;

        // calculating if accounts credit limit exceeded.
        if (balance > creditLimit)
            cout << "credit limit exceeded" << endl;
    }


    return 0; // ended
}











