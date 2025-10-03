#include <iostream>
using namespace std;
int main() {
    int units;
    cout << "Enter units consumed: ";
    cin >> units;
    double bill = 0;
    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = 100 * 1.5 + (units - 100) * 2.5;
    else
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;

    if(bill > 500)
        bill += bill * 0.1;

    cout << "Total Bill: Rs. " << bill << "\n";
    return 0;
}