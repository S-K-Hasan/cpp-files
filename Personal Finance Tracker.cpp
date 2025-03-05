#include <iostream>
#include <string>
#include <map>
using namespace std;

class FinanceTracker {
private:
    static const int MAX_TRANSACTIONS = 100;
    string dates[MAX_TRANSACTIONS];
    double amounts[MAX_TRANSACTIONS];
    string descriptions[MAX_TRANSACTIONS];
    string categories[MAX_TRANSACTIONS];
    int transactionCount = 0;
    map<string, double>categoryExpenses;
    map<string, double>categoryBudgets;
    double totalIncome=0;
    double totalExpenses=0;
    string defaultCategories[5]={"Food","Rent","Utilities","Entertainment","Transportation"};
    int categoryCount=5;

public:
    void addIncome( string date, double amount,  string description) {
        if (transactionCount >= MAX_TRANSACTIONS) {
            cout << "Transaction limit reached. Cannot add more transactions.\n";
            return;
        }

        dates[transactionCount] = date;
        amounts[transactionCount] = amount;
        descriptions[transactionCount] = description;
        categories[transactionCount] = "Income";
        transactionCount++;
        totalIncome += amount;
    }

    void addExpense(const string &date, double amount, const string &description, const string &category) {
        if (transactionCount >= MAX_TRANSACTIONS) {
            cout << "Transaction limit reached. Cannot add more transactions.\n";
            return;
        }

        dates[transactionCount] = date;
        amounts[transactionCount] = -amount;
        descriptions[transactionCount] = description;
        categories[transactionCount] = category;
        transactionCount++;

        totalExpenses += amount;
        categoryExpenses[category] += amount;

        if (categoryBudgets.find(category) != categoryBudgets.end() && categoryExpenses[category] > categoryBudgets[category]) {
            cout << "Alert: You have exceeded the budget for category \"" << category << "\".\n";
        }
    }
    void addCategory(const string &newCategory) {
        for (int i = 0; i < categoryCount; ++i) {
            if (defaultCategories[i] == newCategory) {
                return;
            }
        }
        if (categoryCount < MAX_TRANSACTIONS) {
            defaultCategories[categoryCount++] = newCategory;
        } else {
            cout << "Category limit reached.\n";
        }
    }
    void setBudget(const string &category, double budget) {
        categoryBudgets[category] = budget;
        cout << "Budget set for category \"" << category << "\": " << budget <<endl;
    }

    void generateMonthlyReport() {
        cout << "\n--- Monthly Report ---\n";
        cout << "Total Income: " << totalIncome <<"taka"<<endl;
        cout << "Total Expenses: " << totalExpenses<<"taka" <<endl;
        cout << "Total Savings: " << (totalIncome - totalExpenses)<<"taka" <<endl<<endl;

        cout << "Expenses by Category:\n";
        for (const auto &entry : categoryExpenses) {
            cout << "  " << entry.first << ":" << entry.second << "\n";
        }
        cout << "\nDetailed Transactions:\n";
        for (int i = 0; i < transactionCount; ++i) {
            cout << "  Date: " << dates[i]<< ", Amount: " << amounts[i]<<"taka"<< ", Description: " << descriptions[i]
             << ", Category: " << categories[i]<< "\n";
        }
    }

    void showSavings() {
        cout << "\n--- Total Savings ---\n";
        cout << "Income: " << totalIncome <<"taka"<<endl;
        cout << "Expenses: " << totalExpenses <<"taka"<<endl;
        cout << "Savings: " << (totalIncome - totalExpenses) <<"taka"<<endl;
    }

    void listCategories() {
        cout << "\nAvailable Categories:\n";
        for (int i = 0; i < categoryCount; ++i) {
            cout << "  - " << defaultCategories[i] <<endl;
        }
    }
};
int main() {
    FinanceTracker tracker;
    int choice;

    do {
        cout << "\n--- Personal Finance Tracker ---\n";
        cout << "1. Add Income\n";
        cout << "2. Add Expense\n";
        cout << "3. Add New Category\n";
        cout << "4. Set Budget for Category\n";
        cout << "5. Generate Monthly Report\n";
        cout << "6. Show Total Savings\n";
        cout << "7. List Categories\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string date, description;
            double amount;
            cout << "Enter date (YYYY-MM-DD): ";
            cin >> date;
            cout << "Enter income amount: ";
            cin >> amount;
            cin.ignore();
            cout << "Enter description: ";
            getline(cin, description);
            tracker.addIncome(date, amount, description);
            break;
        }
        case 2: {
            string date, description, category;
            double amount;
            cout << "Enter date (YYYY-MM-DD): ";
            cin >> date;
            cout << "Enter expense amount: ";
            cin >> amount;
            cin.ignore();
            cout << "Enter description: ";
            getline(cin, description);
            tracker.listCategories();
            cout << "Enter category: ";
            getline(cin, category);
            tracker.addExpense(date, amount, description, category);
            break;
        }
        case 3: {
            string newCategory;
            cout << "Enter new category name: ";
            cin.ignore();
            getline(cin, newCategory);
            tracker.addCategory(newCategory);
            break;
        }
        case 4: {
            string category;
            double budget;
            tracker.listCategories();
            cout << "Enter category to set budget: ";
            cin.ignore();
            getline(cin, category);
            cout << "Enter budget amount: ";
            cin >> budget;
            tracker.setBudget(category, budget);
            break;
        }
        case 5:
            tracker.generateMonthlyReport();
            break;
        case 6:
            tracker.showSavings();
            break;
        case 7:
            tracker.listCategories();
            break;
        case 8:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}


