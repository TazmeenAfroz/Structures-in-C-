#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main() {
    char letter;
    enum etype type;

    cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher: ";
    cin >> letter;

    switch (letter) {
        case 'l':
            type = laborer;
            break;
        case 's':
            type = secretary;
            break;
        case 'm':
            type = manager;
            break;
        case 'a':
            type = accountant;
            break;
        case 'e':
            type = executive;
            break;
        case 'r':
            type = researcher;
            break;
        default:
           cout << "Invalid input. Exiting program." << endl;
            return 0;
    }

    switch (type) {
        case laborer:
            cout << "Employee type is laborer." << endl;
            break;
        case secretary:
            cout << "Employee type is secretary." << endl;
            break;
        case manager:
           cout << "Employee type is manager." << endl;
            break;
        case accountant:
           cout << "Employee type is accountant." << endl;
            break;
        case executive:
            cout << "Employee type is executive." << endl;
            break;
        case researcher:
          cout << "Employee type is researcher." << endl;
            break;
    }

    return 0;
}
