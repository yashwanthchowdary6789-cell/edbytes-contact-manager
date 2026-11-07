#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n===== Contact Manager =====\n";
        cout << "1. Add Contact\n";
        cout << "2. List Contacts\n";
        cout << "3. Find Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Contact c;
            cout << "Enter Name: ";
            cin >> c.name;
            cout << "Enter Phone: ";
            cin >> c.phone;
            contacts.push_back(c);
            cout << "Contact Added Successfully!\n";
        }
        else if (choice == 2) {
            if (contacts.empty()) {
                cout << "No contacts available.\n";
            } else {
                cout << "\nContact List:\n";
                for (int i = 0; i < contacts.size(); i++) {
                    cout << i + 1 << ". "
                         << contacts[i].name
                         << " - "
                         << contacts[i].phone << endl;
                }
            }
        }
        else if (choice == 3) {
            string searchName;
            bool found = false;

            cout << "Enter Name to Search: ";
            cin >> searchName;

            for (int i = 0; i < contacts.size(); i++) {
                if (contacts[i].name == searchName) {
                    cout << "Found: "
                         << contacts[i].name
                         << " - "
                         << contacts[i].phone << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Contact not found.\n";
            }
        }
        else if (choice == 4) {
            cout << "Exiting Contact Manager...\n";
        }
        else {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
