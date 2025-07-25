#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;
    int accountNumber;

public:
    string holderName;
    BankAccount(string name, int accNum, double initialBalance)
    {
        holderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount acc1("JAYA SAI KRISHNA", 1001, 5000.0);
    cout << "Account Holder: " << acc1.holderName << endl;
    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc1.checkBalance();
    return 0;
}
