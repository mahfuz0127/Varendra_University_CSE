/*
Write a class BankAccount with private members for account holder's name, account number, and balance. Use a constructor to initialize these values and a destructor to display a message indicating when the object is destroyed. Create a BankAccount object and display the account details/
*/

#include <iostream>
using namespace std;

class BankAccount {

private:
  string accName;
  int accNo;
  double balance;

public:
  BankAccount() {}
  BankAccount(string AN, int acNo, double balance) {
    accName = AN;
    accNo = acNo;
    this->balance = balance;
    cout << "Account Holder : " << accName << endl;
    cout << "Account No : " << accNo << endl;
    cout << "Account Balance : " << balance << endl
      << endl;
  }
  ~BankAccount() {
    cout << endl
      << "Destructor is Called..." << endl;
  }
};
int main() {
  system("cls");

  BankAccount acc1("ABRAR", 1235469, 25630.12);
  BankAccount acc2;

  return 0;
}
