#include <iostream>
using namespace std;

int main () {
    double amount;
    double balance;
    int choice;

    do {
        cout<< "\n ATM MACHINE";
        cout<< "\n 1. Deposit";
        cout<< "\n 2. Withdraw";
        cout<< "\n 3. Check Balance";
        cout<< "\n 4. Exit";
        cout<< "\n Enter your choice ";
        cin>> choice;

        switch (choice) {
            case 1: 
                cout<< "\n Enter amount to deposit : $";
                cin>>amount;
                if (amount>0) {
                    balance = balance + amount;
                    cout<<"/n Deposit successful! Your new balance is : $"<<balance<<endl;
                }
                else {
                    cout<<"Invalid deposit amount."<<endl;
                }
                break;
            
            case 2:
                cout<<"\n Enter anount to withdraw: $";
                cin>>amount;
                if(amount>0 && amount<=balance) {
                    balance -= amount;
                    cout<<"\n Withdrawn successfully! Your new balance is : $" << balance << endl;
                }
                else if(amount > balance) {
                    cout<< "\n Insufficient balance";
                }
                else {
                    cout<<"\n Invalid withdrawal amount."<<endl;
                }
                break;

            case 3:
                cout<<"\n Your current balance is : $ "<< balance << endl;
                break;
            
            case 4: 
                cout <<"\n Thank you for using the ATM. Goodbye !!" << endl;
                break;
            
            default: 
                cout<< "\n Invalid choice. Please try again."<< endl;
        }

    }
    while (choice !=4);

    return 0;
}
