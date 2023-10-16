#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string &accNum, const std::string &accHolder, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accHolder;
        accountBalance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("1234567890", "John Doe", 1000.0);

    // Test deposit and withdrawal
    myAccount.displayBalance();  // Display initial balance

    myAccount.deposit(500.0);    // Deposit $500
    myAccount.withdraw(200.0);   // Withdraw $200
    myAccount.withdraw(1500.0);  // Attempt to withdraw $1500 (insufficient balance)

    myAccount.displayBalance();  // Display updated balance

    return 0;
}
