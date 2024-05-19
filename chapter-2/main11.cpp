#include <iostream>
using namespace std;

int main() {


    // * simple cryptography file *
    int choice;
    cout << "1) encryption \n2) decryption >>> ";
    cin >> choice;

    if (choice == 1) {
        int number;

        cout << "Enter a number (len = 4) >>> ";
        cin >> number;

        int encryptedNumber = 0;
        int originalNumber = number;
        int power = 1000;


        // encryption phase
        
            while (power > 0) {
            int digit = originalNumber / power;
            int encryptedDigit = (digit + (digit % 7)) % 10;
            encryptedNumber = encryptedNumber * 10 + encryptedDigit;
            originalNumber %= power;
            power /= 10;
        }

        cout << "The number is: " << number << " encrypted number is: " << encryptedNumber << endl;
    }

    else if (choice == 2) {
        int num;
        cout << "Enter an encrypted number >>> ";
        cin >> num;

        int decryptedNumber = 0;
        int reversedOriginalNumber = num;
        int reversedPower = 1000;

        // decrypiton phase
        while (reversedPower > 0) {
            int encryptedDigit = (reversedOriginalNumber / reversedPower) % 10;
            int digit = (10 + encryptedDigit - (encryptedDigit % 7)) % 10;
            decryptedNumber = decryptedNumber * 10 + digit;
            reversedOriginalNumber %= reversedPower;
            reversedPower /= 10;
        }

        cout << "The encrypted number is: " << num << " decrypted number is: " << decryptedNumber << endl;
    }

    else {
        cout << "1 or 2 :| ?? ";
    }

    return 0;
}
