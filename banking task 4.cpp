#include <iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    double balance;

    Account(int number, double initialBalance = 0.0) {
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ", New Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ", New Balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void display() {
        cout << "Account No: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    Account acc1(1001, 500);
    acc1.display();
    acc1.deposit(200);
    acc1.withdraw(150);
    acc1.display();

    return 0;
}
