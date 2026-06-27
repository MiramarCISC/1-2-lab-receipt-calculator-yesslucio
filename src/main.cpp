#include <iomanip>
#include <iostream>
#include "receipt.hpp"

using namespace std;

int main() {
    double item1 = 0.0;
    double item2 = 0.0;
    double item3 = 0.0;
    double tipPercent = 0.0;

    cout << "Receipt Calculator" << endl << endl;

    cout << "Enter price for item 1: ";
    if (!(cin >> item1) || item1 < 0) {
        cout << "Enter positive number."
             << endl;
        return 1;
    }

    cout << "Enter price for item 2: ";
    if (!(cin >> item2) || item2 < 0) {
        cout << "Enter positive number."
             << endl;
        return 1;
    }

    cout << "Enter price for item 3: ";
    if (!(cin >> item3) || item3 < 0) {
        cout << "Enter positive number."
             << endl;
        return 1;
    }

    cout << "Enter tip percentage: ";
    if (!(cin >> tipPercent) || tipPercent < 0) {
        cout << "Enter positive number."
             << endl;
        return 1;
    }

    double subtotal = calculateSubtotal(item1, item2, item3);
    double tax = calculateTax(subtotal);
    double tip = calculateTip(subtotal, tipPercent);
    double total = calculateTotal(subtotal, tax, tip);

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
