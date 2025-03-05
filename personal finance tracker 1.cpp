#include <iostream>
#include <string>

using namespace std;

class FinanceTracker {
private:
    static const int MAX_TRANSACTIONS = 100;
    static const int MAX_CATEGORIES = 20;
    string dates[MAX_TRANSACTIONS];
    double amounts[MAX_TRANSACTIONS];
    string descriptions[MAX_TRANSACTIONS];
    string categories[MAX_TRANSACTIONS];
    int transactionCount = 0;

    string categoryNames[MAX_CATEGORIES]={"Food", "Rent", "Utilities", "Entertainment", "Transportation"};
    double categoryExpenses[MAX_CATEGORIES]={0};
    double categoryBudgets[MAX_CATEGORIES]={0};
    int categoryCount = 5;
    double totalIncome = 0;
    double totalExpenses = 0;
    int findCategoryIndex(const string &category) {
        for (int i = 0; i < categoryCount; ++i) {
            if (categoryNames[i] == category) {
                return i;
            }
        }
        return -1;
    }

public:
    void addIncome(string date, double amount,string description) {
        if (transactionCount>=MAX_TRANSACTIONS) {
            cout << "Transaction limit reached. Cannot add more transactions.\n";
            return;
        }
        dates[transactionCount] =date;
        amounts[transactionCount] =amount;
        descriptions[transactionCount] =description;
        categories[transactionCount] ="Income";
        transactionCount++;
        totalIncome += amount;
    }

    void addExpense(string date, double amount,string description,string category) {
        if (transactionCount >= MAX_TRANSACTIONS) {
            cout << "Transaction limit reached. Cannot add more transactions.\n";
            return;
        }

        int index = findCategoryIndex(category);
        if (index == -1){
            cout << "Category \"" << category << "\" not found.\n";
            return;
        }

        dates[transactionCount]= date;
        amounts[transactionCount] = -amount;
        descriptions[transactionCount] =description;
        categories[transactionCount] =category;
        transactionCount++;
        totalExpenses += amount;
        categoryExpenses[index] += amount;

        if (categoryBudgets[index]>0&&categoryExpenses[index]>categoryBudgets[index]){
            cout << "Alert: You have exceeded the budget for category \"" << category << "\."<<endl;
        }
    }

    void addCategory(const string &newCategory) {
        if (categoryCount >= MAX_CATEGORIES) {
            cout <<"Category limit reached. Cannot add more categories."<<endl;
            return;
        }

        if (findCategoryIndex(newCategory)!=-1) {
            cout << "Category \""<< newCategory<< "\" already exists."<<endl;
            return;
        }

        categoryNames[categoryCount]=newCategory;
        categoryExpenses[categoryCount]=0;
        categoryBudgets[categoryCount]=0;
        categoryCount++;
    }

    void setBudget(string category, double budget) {
        int index=findCategoryIndex(category);
        if (index==-1) {
            cout << "Category \""<<category<< "\" not found."<<endl;
            return;
        }

        categoryBudgets[index] = budget;
        cout <<"Budget set for category \""<<category<< "\": "<< budget<< " taka."<<endl;
    }

    void generateMonthlyReport() {
        cout << "\n--- Monthly Report ---\n";
        cout << "Total Income: "<< totalIncome<<" taka";
        cout << "Total Expenses: "<<totalExpenses<<" taka";
        cout << "Total Savings: "<<(totalIncome - totalExpenses)<<" taka"<<endl<<endl;

        cout << "Expenses by Category:\n";
        for (int i = 0; i < categoryCount; ++i) {
            cout << "  " << categoryNames[i] << ": " << categoryExpenses[i] << " taka\n";
        }

        cout << "\nDetailed Transactions:\n";
        for (int i = 0; i < transactionCount; ++i) {
            cout << "  Date: " << dates[i] << ", Amount: " << amounts[i] << " taka"
                 << ",Description: "<<descriptions[i]<<", Category: "<<categories[i]<<endl;
        }
    }

    void showSavings() {
        cout <<"\n--- Total Savings ---\n";
        cout <<"Income: " <<totalIncome<<" taka"<<endl;
        cout <<"Expenses: "<<totalExpenses<<" taka"<<endl;
        cout << "Savings: "<< (totalIncome - totalExpenses)<<" taka"<<endl;
    }

    void listCategories() {
        cout << "\nAvailable Categories:\n";
        for (int i = 0; i < categoryCount; ++i) {
            cout << "  - "<< categoryNames[i]<<endl;
        }
    }
};

int main() {
    FinanceTracker tracker;
    int choice;

    do {
        cout << "\n--- Personal Finance Tracker ---"<<endl;
        cout << "1. Add Income"<<endl;
        cout << "2. Add Expense"<<endl;
        cout << "3. Add New Category"<<endl;
        cout << "4. Set Budget for Category"<<endl;
        cout << "5. Generate Monthly Report"<<endl;
        cout << "6. Show Total Savings"<<endl;
        cout << "7. List Categories"<<endl;
        cout << "8. Exit"<<endl;
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
            cout << "Enter description: ";
            cin>>description;
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
            cout << "Enter description: ";
            cin>>description;
            tracker.listCategories();
            cout << "Enter category: ";
            cin>>category;
            tracker.addExpense(date, amount, description, category);
            break;
        }
        case 3: {
            string newCategory;
            cout << "Enter new category name: ";
            cin>>newCategory;
            tracker.addCategory(newCategory);
            break;
        }
        case 4: {
            string category;
            double budget;
            tracker.listCategories();
            cout << "Enter category to set budget: ";
            cin>>category;
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
