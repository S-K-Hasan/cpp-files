#include<bits/stdc++.h>
using namespace std;


class BankAccount {
private:
    static int accountCounter; // To generate unique account numbers
    string accountNumber;
    string name;
    string address;
    string accountType;
    double balance;
    int numTransactions;

public:
    // Constructor to initialize a new bank account
    /*   BankAccount(string depositorName, string depositorAddress, string accType, double initialBalance)
        : name(depositorName), address(depositorAddress), accountType(accType), balance(initialBalance), numTransactions(0) {
        accountNumber = "BA" + to_string(1000 + accountCounter++);
    }*/
     BankAccount(string depositorName, string depositorAddress, string accType, double initialBalance) {
     name=depositorName;
      address=depositorAddress;
       accountType=accType;
        balance=initialBalance;
        numTransactions=0 ;
        accountNumber = "BA" + to_string(1000 + accountCounter++);

     }
    // Function to display depositor's information
    void displayInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name          : " << name << endl;
        cout << "Address       : " << address << endl;
        cout << "Account Type  : " << accountType << endl;
        cout << "Balance       : $" << balance << endl;
        cout << "Transactions  : " << numTransactions << endl;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            numTransactions++;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Function to withdraw an amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            numTransactions++;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Invalid or insufficient funds for withdrawal.\n";
        }
    }

    // Function to change the address
    void changeAddress(const string& newAddress) {
        address = newAddress;
        cout << "Address updated successfully.\n";
    }

    // Function to get the number of transactions
    int getNumTransactions() const {
        return numTransactions;
    }
};

// Initialize static member
int BankAccount::accountCounter = 0;

int main() {
    BankAccount accounts[5] = {
        BankAccount("Alice Smith", "123 Maple St", "Savings", 1000.0),
        BankAccount("Bob Johnson", "456 Oak St", "Checking", 500.0),
        BankAccount("Catherine Brown", "789 Pine St", "Savings", 750.0),
        BankAccount("David Wilson", "101 Birch St", "Business", 2000.0),
        BankAccount("Eva Davis", "202 Cedar St", "Checking", 1250.0)
    };

    accounts[0].deposit(200); // Alice deposits $200
    accounts[1].withdraw(100); // Bob withdraws $100
    accounts[2].changeAddress("555 Elm St"); // Catherine changes her address
    accounts[0].displayInfo(); // Display Alice's updated information
    accounts[1].displayInfo(); // Display Bob's updated information
    accounts[2].displayInfo(); // Display Catherine's updated information

    // Calculate total number of transactions
    int totalTransactions = 0;
    for (int i = 0; i < 5; i++) {
        totalTransactions += accounts[i].getNumTransactions();
    }

    cout << "Total number of transactions: " << totalTransactions << endl;
    return 0;
}
