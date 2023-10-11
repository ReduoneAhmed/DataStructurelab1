#include <iostream>
#include <string>

using namespace std;

struct BankAccount
{
    string accountNumber;
    string accountHolderName;
    double accountBalance;


    BankAccount(string number, string name, double balance)
    {
        accountNumber = number;
        accountHolderName = name;
        accountBalance = balance;
    }
};

void deposit(BankAccount& account, double amount)
{
    if (amount > 0)
    {
        account.accountBalance += amount;
        cout << "Deposit successful. New balance: $" << account.accountBalance << endl;
    }
    else
    {
        cout << "Invalid deposit amount." << endl;
    }
}

void withdraw(BankAccount& account, double amount)
{
    if (amount > 0 && amount <= account.accountBalance)
    {
        account.accountBalance -= amount;
        cout << "Withdrawal successful. New balance: $" << account.accountBalance << endl;
    }
    else if (amount > account.accountBalance)
    {
        cout << " Withdrawal not possible." << endl;
    }
    else
    {
        cout << "Invalid withdrawal amount." << endl;
    }
}

void displayAccountInfo(const BankAccount& account)
{
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder's Name: " << account.accountHolderName << endl;
    cout << "Account Balance: $" << account.accountBalance << endl;
}

int main()
{
    BankAccount myAccount("22491763", "ASIF AHMED", 800000);

    int choice;
    double amount;

    cout << "Welcome to the Bank Account Management System!" << endl;

    do
    {
        cout << "nMenu:" <<endl;
        cout << "1. Deposit:" <<endl;
        cout << "2. Withdraw:" <<endl;
        cout << "3. Account Information:" <<endl;
        cout << "4. Exit:" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the deposit amount: $";
            cin >> amount;
            deposit(myAccount, amount);
            break;
        case 2:
            cout << "Enter the Withdrawal amount: $";
            cin >> amount;
            withdraw(myAccount, amount);
            break;
        case 3:
            displayAccountInfo(myAccount);
            break;
        case 4:
            cout << "Thanks for using the Bank Account Management System. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
    while (choice != 4);

    return 0;
}

