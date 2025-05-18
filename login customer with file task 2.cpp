#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ofstream file(username + ".txt");
    file << password;
    file.close();

    cout << "Registration successful!\n";
}

bool loginUser() {
    string username, password, storedPassword;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file(username + ".txt");
    if (file) {
        getline(file, storedPassword);
        file.close();
        if (password == storedPassword) {
            cout << "Login successful!\n";
            return true;
        }
    }
    cout << "Login failed!\n";
    return false;
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        registerUser();
    } else if (choice == 2) {
        loginUser();
    } else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
