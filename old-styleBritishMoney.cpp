
#include <iostream>
using namespace std;

// Define the struct for storing old-style British money amounts
struct sterling {
    int pounds;
    int shillings;
    int pence;
};

int main() {
    // Ask the user to enter a decimal pound amount
    double decimalPounds;
    cout << "Enter a decimal pound amount: ";
    cin >> decimalPounds;

    // Convert to old-style British money
    int totalPence = static_cast<int>(decimalPounds * 240);
    int pounds = totalPence / (20 * 12);
    int shillings = (totalPence % (20 * 12)) / 12;
    int pence = totalPence % 12;

    // Store the result in a struct variable
    sterling amount = { pounds, shillings, pence };

    // Display the result in pounds-shillings-pence format
    cout << "Equivalent in old-style British money: £"
         << amount.pounds << "." << amount.shillings << "." << amount.pence << endl;

    return 0;
}

