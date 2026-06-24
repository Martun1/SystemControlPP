#include <iostream>
using namespace std;

void processManagerMenu() {
    int choice;
    do {
        cout << "\n=== Process Manager ===\n";
        cout << "1. List processes (demo)\n";
        cout << "2. Create process (demo)\n";
        cout << "3. Kill process (demo)\n";
        cout << "0. Back\n";
        cout << "Choose option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "[Process Manager] Listing processes...\n";
                break;
            case 2:
                cout << "[Process Manager] Creating process...\n";
                break;
            case 3:
                cout << "[Process Manager] Killing process...\n";
                break;
            case 0:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (choice != 0);
}
