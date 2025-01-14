#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    double withdraw;
public:
    BankAccount(double baalance) : balance(baalance) {}

    double withdrawl(double withdrawn) {
        if (balance < withdrawn) {
            throw 0;
        }
        balance = balance - withdraw;
        return withdrawn;
    }
};

void CheckWithdraw(double balance2, double withdraw2) {
    BankAccount acc1(balance2);

    try {
        cout << "Withdrawn Ammount : " << acc1.withdrawl(withdraw2) << endl;
    }
    catch (int e) {
        cout << "Error! Insufficient funds." << endl;
    }

    cout << "" << endl;
}


int main() {
    system("cls");

    CheckWithdraw(5000.55, 3000.33);
    CheckWithdraw(10120.477, 13020.56);

    return 0;
}
