#include <iostream>
using namespace std;

int main () {
    int n1, n2, n3;

    // getting numbers:
    cout << "enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // computing
    int biggest;

    if (n1 > n2 && n1 > n3)
        biggest = n1;
    else if (n2 > n1 && n2 > n3)
        biggest = n2;
    else
        biggest = n3;

    cout << "average of numbers: " << (n1 + n2 + n3) / 3 << endl;
    cout << "product: " << n1*n2*n3 << endl;
    cout << "and the largest number is: " << biggest << endl;

    return 0; // program finished

}
