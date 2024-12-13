#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    static int accountCounter;
    string accountNumber;
    string name;
    string address;
    string accountType;
    double balance;
    int numTransactions=0;

public:

    void setAccountNumber() {
        accountNumber = "BA" + to_string(1000 + accountCounter++);
    }

    void setName(const string depositorName) {
        name = depositorName;
    }

    void setAddress(const string depositorAddress) {
        address = depositorAddress;
    }

    void setAccountType(const string accType) {
        accountType = accType;
    }

    void setBalance(double initialBalance) {
        balance = initialBalance;
    }

    void setNumTransactions(int transactions) {
        numTransactions = transactions;
    }


    void displayInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name          : " << name << endl;
        cout << "Address       : " << address << endl;
        cout << "Account Type  : " << accountType << endl;
        cout << "Balance       : " << balance << endl;
        cout << "Transactions  : " << numTransactions << endl;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            numTransactions++;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            numTransactions++;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Invalid or insufficient funds for withdrawal.\n";
        }
    }


    void changeAddress(const string newAddress) {
        address = newAddress;
        cout << "Address updated successfully.\n";
    }


    int getNumTransactions() const {
        return numTransactions;
    }
};

  int BankAccount::accountCounter = 0;

int main() {
    BankAccount accounts[5];


    accounts[0].setName("Alice Smith");
    accounts[0].setAddress("123 Maple St");
    accounts[0].setAccountType("Savings");
    accounts[0].setBalance(1000.0);
    accounts[0].setAccountNumber();

    accounts[1].setName("Bob Johnson");
    accounts[1].setAddress("456 Oak St");
    accounts[1].setAccountType("Checking");
    accounts[1].setBalance(500.0);
    accounts[1].setAccountNumber();

    accounts[2].setName("Catherine Brown");
    accounts[2].setAddress("789 Pine St");
    accounts[2].setAccountType("Savings");
    accounts[2].setBalance(750.0);
    accounts[2].setAccountNumber();

    accounts[3].setName("David Wilson");
    accounts[3].setAddress("101 Birch St");
    accounts[3].setAccountType("Business");
    accounts[3].setBalance(2000.0);
    accounts[3].setAccountNumber();

    accounts[4].setName("Eva Davis");
    accounts[4].setAddress("202 Cedar St");
    accounts[4].setAccountType("Checking");
    accounts[4].setBalance(1250.0);
    accounts[4].setAccountNumber();


    accounts[0].deposit(200);
    accounts[1].withdraw(100);
    accounts[2].changeAddress("555 Elm St");
    accounts[0].displayInfo();
    accounts[1].displayInfo();
    accounts[2].displayInfo();


    int totalTransactions = 0;
    for (int i = 0; i < 5; i++) {
        totalTransactions += accounts[i].getNumTransactions();
    }

    cout << "Total number of transactions: " << totalTransactions << endl;
    return 0;
}

