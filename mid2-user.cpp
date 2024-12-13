#include<bits/stdc++.h>
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
    // Constructor to initialize a new bank account
    /*   BankAccount(string depositorName, string depositorAddress, string accType, double initialBalance)
        : name(depositorName), address(depositorAddress), accountType(accType), balance(initialBalance), numTransactions(0) {
        accountNumber = "BA" + to_string(1000 + accountCounter++);
    }*/
     BankAccount() {
    // for(int i=0 ;i<5;i++)
   //  {
          cout << "Account Number: " << endl;
         cin>>accountNumber;
         accountNumber = "BA" + to_string(1000 + accountCounter++);
        cout << "Name          : " <<  endl;
        cin>>name;
        cout << "Address       : " <<endl;
        cin>>address;
        cout << "Account Type  : " << endl;
        cin>>accountType;
        cout << "Balance       : " << endl;
        cin>>balance;
   //  }


     }

    void displayInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name          : " << name << endl;
        cout << "Address       : " << address << endl;
        cout << "Account Type  : " << accountType << endl;
        cout << "Balance       : $" << balance << endl;
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


    void changeAddress(const string& newAddress) {
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

    accounts[0].deposit(200);
    accounts[1].withdraw(100);
    accounts[2].changeAddress("555 Elm St"); //
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

