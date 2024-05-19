#include <iostream>
using namespace std;

int main () {

    float sales;
    float percent_sales;

    while (true) {
        cout << "\nenter sales in dollor(0 to end) >> ";
        cin >> sales;

        if (sales == 0)
            break;
        percent_sales = ( 20 * sales ) / 100;

        cout << "Received money: " << sales + percent_sales;
    }



    return 0; // programs ended sec.
}
