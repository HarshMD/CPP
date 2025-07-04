#include <iostream>
using namespace std;

const int SIZE = 10;
string name[SIZE];
int accountNumber[SIZE];
float amount[SIZE];
int total = 0;

// Create accounts
void createAccounts() {
    cout << "Enter number of accounts to create: ";
    cin >> total;

    for (int i = 0; i < total; i++) {
        cout << "\nEnter details for Account " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name[i];
        cout << "Account Number: ";
        cin >> accountNumber[i];
        cout << "Initial Amount: ";
        cin >> amount[i];
    }
}

// Display all accounts
void displayAccounts() {
    cout << "\n--- Account Details ---\n";
    for (int i = 0; i < total; i++) {
        cout << "Name: " << name[i]
             << ", Account Number: " << accountNumber[i]
             << ", Balance: " << amount[i] << endl;
    }
}

// Search for an account
void searchAccount(int accNo) {
    for (int i = 0; i < total; i++) {
        if (accountNumber[i] == accNo) {
            cout << "Account found: " << name[i] << ", Balance: " << amount[i] << endl;
            return;
        }
    }
    cout << "Account not found.\n";
}

// Deposit amount
void deposit(int accNo, float amt) {
    for (int i = 0; i < total; i++) {
        if (accountNumber[i] == accNo) {
            amount[i] += amt;
            cout << "Deposited! New Balance: " << amount[i] << endl;
            return;
        }
    }
    cout << "Account not found.\n";
}

// Withdraw amount
void withdraw(int accNo, float amt) {
    for (int i = 0; i < total; i++) {
        if (accountNumber[i] == accNo) {
            if (amount[i] >= amt) {
                amount[i] -= amt;
                cout << "Withdrawn! New Balance: " << amount[i] << endl;
            } else {
                cout << "Insufficient balance.\n";
            }
            return;
        }
    }
    cout << "Account not found.\n";
}


int main() {
    int choice, accNo;
    float amt;

    createAccounts(); 

    do {
        cout << "\n--- Calculator ---\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                auto add = [](){
                    
                };
                break;
            case 2:
                cout << "Enter account number to search: ";
                cin >> accNo;
                searchAccount(accNo);
                break;
            case 3:
                cout << "Enter account number: ";
                cin >> accNo;
                cout << "Enter amount to deposit: ";
                cin >> amt;
                deposit(accNo, amt);
                break;
            case 4:
                cout << "Enter account number: ";
                cin >> accNo;
                cout << "Enter amount to withdraw: ";
                cin >> amt;
                withdraw(accNo, amt);
                break;
            case 5:
                cout << "Exiting banking system.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}