#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:

    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " into account " << accountNumber << ".\n";
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << " from account " << accountNumber << ".\n";
        } else if (amount > balance) {
            cout << "Insufficient funds for withdrawal.\n";
        } else {
            cout << "Withdrawal amount must be positive.\n";
        }
    }

    void displayBalance() const {
        cout << "Account " << accountNumber << " has a balance of " << balance << ".\n";
    }
};

int main() {

    BankAccount account(123456, 1000.0);

    account.deposit(500.0);
    account.displayBalance();

    cout<<endl;
    account.withdraw(200.0);
    account.displayBalance();

    return 0;
}
