#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;
public:
    Account(string name, int accNo, string accType, double initialBalance) 
        : customerName(name), accountNumber(accNo), accountType(accType), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }

    void displayFullDetails() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Saving : public Account {
public:
    Saving(string name, int accNo, double initialBalance) 
        : Account(name, accNo, "Saving", initialBalance) {}
};

class Current : public Account {
public:
    Current(string name, int accNo, double initialBalance) 
        : Account(name, accNo, "Current", initialBalance) {}
};

int main() {
    char accountChoice;
    string name;
    int accNo;
    double initialBalance = 30.0; // Assuming some initial balance for all accounts
    Account* account = NULL;

    cout << "Enter S for saving customer and C for current a/c customer: ";
    cin >> accountChoice;
    cout << "Enter Customer Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;

    if (accountChoice == 'S' || accountChoice == 's') {
        account = static_cast<Account*>(new Saving(name, accNo, initialBalance));
    } else if (accountChoice == 'C' || accountChoice == 'c') {
        account = static_cast<Account*>(new Current(name, accNo, initialBalance));
    } else {
        cout << "Invalid account type!" << endl;
        return 1;
    }

    int choice;
    do {
        cout << "\nChoose Your Choice\n1) Deposit\n2) Withdraw\n3) Display Balance\n4) Display Full Details\n5) Exit\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to Deposit: ";
                cin >> amount;
                account->deposit(amount);
                break;
            }
            case 2: {
                double amount;
                account->displayBalance();
                cout << "Enter amount to Withdraw: ";
                cin >> amount;
                account->withdraw(amount);
                break;
            }
            case 3:
                account->displayBalance();
                break;
            case 4:
                account->displayFullDetails();
                break;
            case 5:
                cout << "Thank You for Banking with us.." << endl;
                break;
            default:
                cout << "Invalid Choice!" << endl;
        }
    } while (choice != 5);

    delete account;
    return 0;
}