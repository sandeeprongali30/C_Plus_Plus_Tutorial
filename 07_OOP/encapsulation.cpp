#include <iostream>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double bal)
    {
        this->accountNumber = accNum;
        this->balance = bal;
    }

    // Getter
    double getBalance() const
    {
        return balance;
    }

    // Method to Deposit Money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Your Account balance is " << balance << endl;
        }
        else
        {
            cout << "Invalid Amount" << endl;
        }
    }

    // Method to Withdraw Money
    void withdraw(double amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << "Your Account balance is " << balance << endl;
        }
        else if (amount <= 0)
        {
            cout << "Invalid Amount " << endl;
        }
        else
        {
            cout << "No enough funds" << endl;
        }
    }
};

int main()
{
    BankAccount bankAccount("1234asd1234", 150000.50);
    cout << bankAccount.getBalance() << endl;
    bankAccount.deposit(8000);
    bankAccount.withdraw(80000);
    return 0;
}