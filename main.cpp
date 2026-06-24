#include <iostream>
#include "file_manager.h"
#include "process_manager.h"
#include "system_monitor.h"
#include "user_manager.h"
#include "tools.h"

using namespace std;

void printMainMenu() {
    cout << "=============================\n";
    cout << "   SystemControl++ (Basic)   \n";
    cout << "=============================\n";
    cout << "1. File Manager\n";
    cout << "2. Process Manager\n";
    cout << "3. System Monitor\n";
    cout << "4. User Manager\n";
    cout << "5. Tools\n";
    cout << "0. Exit\n";
    cout << "Choose option: ";
}

int main() {
    int choice;
    do {
        printMainMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                fileManagerMenu();
                break;
            case 2:
                processManagerMenu();
                break;
            case 3:
                systemMonitorMenu();
                break;
            case 4:
                userManagerMenu();
                break;
            case 5:
                toolsMenu();
                break;
            case 0:
                cout << "Exiting SystemControl++...\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }

        cout << "\n";
    } while (choice != 0);

    return 0;
}
