#include <iostream>
using namespace std;
int main() {
    double balance = 1000; // initial balance
    int choice;
    do{
        cout << "\n1. Balance Inquiry\n2. Withdraw\n3. Deposit\n4. Exit\nChoice: ";
        cin >> choice;
        switch(choice){
            case 1: cout << "Balance: " << balance << "\n"; break;
            case 2: {
                double amt; cout << "Enter amount: "; cin >> amt;
                if(amt<=balance) {balance-=amt; cout << "Withdrawal Successful\n";}
                else cout << "Insufficient Balance\n";
                break;
            }
            case 3: {
                double amt; cout << "Enter amount: "; cin >> amt;
                balance+=amt; cout << "Deposit Successful\n";
                break;
            }
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }
    }while(choice!=4);
    return 0;
}