#include <iostream>

using namespace std;

class BankAccount {
    private:
        double balance;
        int accountNumber;
    
    public:
        BankAccount() {
            balance = 0.0;
            accountNumber = 0;
        }
        
        void setBalance(double amount) {
            balance = amount;
        }
        
        double getBalance() {
            return balance;
        }
        
        void setAccountNumber(int accountNum) {
            accountNumber = accountNum;
        }
        
        int getAccountNumber() {
            return accountNumber;
        }
        
        void deposit(double amount) {
            balance += amount;
        }
        
        void withdraw(double amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }
};

int main() {
    BankAccount myAccount;
    myAccount.setAccountNumber(12345);
    myAccount.setBalance(1000.00);
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Balance: " << myAccount.getBalance() << endl;
    myAccount.deposit(500.00);
    cout << "New Balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(2000.00);
    cout << "New Balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(500.00);
    cout << "New Balance: " << myAccount.getBalance() << endl;
    return 0;
}

