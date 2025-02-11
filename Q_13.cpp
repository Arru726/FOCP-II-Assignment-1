#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance = 1000.00; 
    int choice;
    double amount;

    do {

        cout << "\n===== ATM Menu =====\n";
        cout << "1. Balance Inquiry\n";
        cout << "2. Deposit\n";
        cout << "3. Withdrawal\n";
        cout << "4. Exit\n";
        cout << "====================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << fixed << setprecision(2);
                cout << "Your current balance is: " << balance << "\n";
                break;

            case 2:
                cout << "Enter the amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully.\n";
                    cout << "Updated balance: " << balance << "\n";
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 3:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;

                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "$" << amount << " withdrawn successfully.\n";
                        cout << "Updated balance: " << balance << "\n";
                    } else {
                        cout << "Insufficient balance.\n";
                    }
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
