#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void listFiles() {
    cout << "[File Manager] Listing files (demo)...\n";

}

void createFile() {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    ofstream file("data/" + filename);
    if (file) {
        cout << "File created: " << filename << "\n";
    } else {
        cout << "Error creating file.\n";
    }
}

void deleteFile() {
    string filename;
    cout << "Enter file name to delete: ";
    cin >> filename;

    if (remove(("data/" + filename).c_str()) == 0) {
        cout << "File deleted: " << filename << "\n";
    } else {
        cout << "Error deleting file.\n";
    }
}

void fileManagerMenu() {
    int choice;
    do {
        cout << "\n=== File Manager ===\n";
        cout << "1. List files\n";
        cout << "2. Create file\n";
        cout << "3. Delete file\n";
        cout << "0. Back\n";
        cout << "Choose option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                listFiles();
                break;
            case 2:
                createFile();
                break;
            case 3:
                deleteFile();
                break;
            case 0:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (choice != 0);
}
