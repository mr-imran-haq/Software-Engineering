#include<iostream>
#include<string>
#include<windows.h>
#include<iomanip>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string ownerName;
    float balance;

public:
    BankAccount(int accNum, string name, float bal) {
        accountNumber = accNum;
        ownerName = name;
        balance = bal;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nMoney Deposited Successfully!\n";
            cout << "Deposited Amount: " << amount << " BDT\n";
        }
        else {
            cout << "\nInvalid Amount!\n";
        }
    }

    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "\nInvalid Amount!\n";
        }
        else if (amount > balance) {
            cout << "\nInsufficient Balance!\n";
        }
        else {
            balance -= amount;
            cout << "\nMoney Withdrawn Successfully!\n";
            cout << "Withdrawn Amount: " << amount << " BDT\n";
        }
    }

    void displayMoney() {
        cout << "\n----- Account Information -----\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Owner Name     : " << ownerName << endl;
        cout << "Balance        : " << fixed << setprecision(2) << balance << " BDT\n";
        cout << "-------------------------------\n";
    }
};

int main() {
    int accountNumber;
    string ownerName;
    float initialBalance;

    cout << "===== Create Bank Account =====\n";

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cin.ignore();
    cout << "Enter Owner Name: ";
    getline(cin, ownerName);

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    if (initialBalance < 0) {
        initialBalance = 0;
    }

    BankAccount account(accountNumber, ownerName, initialBalance);

    while (1) {
        cout << "\n----- Bangladesh Bank -----\n";
        cout << "1/ Deposit Money\n";
        cout << "2/ Withdraw Money\n";
        cout << "3/ Check Balance\n";
        cout << "4/ Exit\n";
        cout << "---------------------------\n";

        int choice;
        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 1) {
            float amount;
            cout << "\nEnter Deposit Amount: ";
            cin >> amount;

            account.deposit(amount);
        }
        else if (choice == 2) {
            float amount;
            cout << "\nEnter Withdraw Amount: ";
            cin >> amount;

            account.withdraw(amount);
        }
        else if (choice == 3) {
            account.displayMoney();
        }
        else if (choice == 4) {
            cout << "\nThank You for Using Bangladesh Bank System!\n";
            break;
        }
        else {
            cout << "\nInvalid Choice! Please Try Again.\n";
        }
    }

    return 0;
}