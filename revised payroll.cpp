#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <windows.h>
using namespace std;

class Login {
private:
    string LoginID,Password;
public:
    Login(){
        LoginID="";
        Password="";
    }

    void setID(string id)
    {
        LoginID = id;
    }

    void setPW(string pw)
    {
        Password = pw;
    }

    string getID()
    {
        return LoginID;
    }

    string getPW()
    {
        return Password;
    }
};

void registration(Login &log)
 {
    system("cls");
    string id,pw;
    cout<<"\tEnter Login ID: ";
    cin>>id;
    log.setID(id);

start:
    cout<<"\tEnter A Strong Password (min 8 chars): ";
    cin>>pw;
    if(pw.length()>=8)
    {
        log.setPW(pw);
    }
    else
    {
        cout<<"\tEnter Minimum 8 Characters!" <<endl;
        goto start;
    }
    ofstream outfile("Login.txt", ios::app);
    if (!outfile)
    {
        cout<<"\tError: File Can't Open!"<<endl;
    }
    else
    {
        outfile<<id<<":"<<pw<<endl;
        cout<<"\tUser Registered Successfully!"<<endl;
    }
    outfile.close();
    Sleep(2000);
}

bool login()
 {
    system("cls");
    string id, pw;
    cout<<"\tEnter Login ID: ";
    cin>>id;

    cout <<"\tEnter Password: ";
    cin>>pw;

    ifstream infile("Login.txt");
    if (!infile)
    {
        cout<<"\tError: File Can't Open!"<<endl;
        return false;
    }

    string line;
    while (getline(infile, line))
    {
        stringstream ss(line);
        string userID,userPW;
        getline(ss,userID,':');
        getline(ss,userPW);

        if (id==userID&&pw==userPW)
        {
            cout<<"\tLogin Successful! Welcome "<<id<<"!"<<endl;
            infile.close();
            Sleep(2000);
            return true;
        }
    }

    cout <<"\tError: Incorrect Login ID or Password!"<<endl;
    infile.close();
    Sleep(2000);
    return false;
 }

class Employee {
protected:
    int id;
    string name;
    double hourlyRate;
    double hoursWorked;

public:
    Employee(int empId, string empName, double rate, double hours)
        : id(empId), name(empName), hourlyRate(rate), hoursWorked(hours) {}

    Employee() : id(0), name(""), hourlyRate(0.0), hoursWorked(0.0) {}

    virtual ~Employee() {}

    int getId() const { return id; }
    string getName() const { return name; }
    virtual double calculateSalary() const { return hourlyRate * hoursWorked; }

    virtual void displayDetails() const {
        cout << left << setw(10) << id << setw(20) << name
             << setw(15) << hourlyRate << setw(15) << hoursWorked
             << setw(15) << calculateSalary() << endl;
    }

    virtual string toFileString() const {
        stringstream ss;
        ss << id << "," << name << "," << hourlyRate << "," << hoursWorked;
        return ss.str();
    }

    static Employee* fromFileString(const string &line) {
        stringstream ss(line);
        string token;
        int id;
        string name;
        double rate, hours;
        getline(ss, token, ',');
        id = stoi(token);
        getline(ss, name, ',');
        getline(ss, token, ',');
        rate = stod(token);
        getline(ss, token, ',');
        hours = stod(token);

        return new Employee(id, name, rate, hours);
    }
};

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(int empId, string empName, double rate, double hours)
        : Employee(empId, empName, rate, hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked + 500; // Example: Full-time bonus
    }

    void displayDetails() const override {
        cout << left << setw(10) << id << setw(20) << name
             << setw(15) << hourlyRate << setw(15) << hoursWorked
             << setw(15) << calculateSalary() << " (Full-Time)" << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    PartTimeEmployee(int empId, string empName, double rate, double hours)
        : Employee(empId, empName, rate, hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked * 0.9; // Example: 10% deduction
    }

    void displayDetails() const override {
        cout << left << setw(10) << id << setw(20) << name
             << setw(15) << hourlyRate << setw(15) << hoursWorked
             << setw(15) << calculateSalary() << " (Part-Time)" << endl;
    }
};

class Intern : public Employee {
public:
    Intern(int empId, string empName, double rate, double hours)
        : Employee(empId, empName, rate, hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked * 0.8; // Example: Reduced intern rate
    }

    void displayDetails() const override {
        cout << left << setw(10) << id << setw(20) << name
             << setw(15) << hourlyRate << setw(15) << hoursWorked
             << setw(15) << calculateSalary() << " (Intern)" << endl;
    }
};

class EntryLevel : public Employee {
public:
    EntryLevel(int empId, string empName, double rate, double hours)
        : Employee(empId, empName, rate, hours) {}

    double calculateSalary() const override {
        return Employee::calculateSalary(); // No modification
    }

    void displayDetails() const override {
        cout << left << setw(10) << id << setw(20) << name
             << setw(15) << hourlyRate << setw(15) << hoursWorked
             << setw(15) << calculateSalary() << " (Entry-Level)" << endl;
    }
};

class SeniorLevel : public Employee {
public:
    SeniorLevel(int empId, string empName, double rate, double hours)
        : Employee(empId, empName, rate, hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked + 1000; // Senior bonus
    }

    void displayDetails() const override {
        cout << left << setw(10) << id << setw(20) << name
             << setw(15) << hourlyRate << setw(15) << hoursWorked
             << setw(15) << calculateSalary() << " (Senior-Level)" << endl;
    }
};

class PayrollSystem {
private:
    vector<Employee*> employees;

    void saveToFile() {
        ofstream outFile("employees.txt");
        for (const auto& emp : employees) {
            outFile << emp->toFileString() << endl;
        }
        outFile.close();
    }

public:
    void addEmployee(int id, string name, double hourlyRate, double hoursWorked) {
        Employee* newEmployee = nullptr;
        string type, level;
        cout << "Enter Employee Type (full-time, part-time, intern): ";
        cin >> type;
        cout << "Enter Experience Level (entry, senior): ";
        cin >> level;

        if (type == "full-time") {
            newEmployee = new FullTimeEmployee(id, name, hourlyRate, hoursWorked);
        } else if (type == "part-time") {
            newEmployee = new PartTimeEmployee(id, name, hourlyRate, hoursWorked);
        } else if (type == "intern") {
            newEmployee = new Intern(id, name, hourlyRate, hoursWorked);
        }

        if (level == "entry") {
            newEmployee = new EntryLevel(id, name, hourlyRate, hoursWorked);
        } else if (level == "senior") {
            newEmployee = new SeniorLevel(id, name, hourlyRate, hoursWorked);
        }

        if (newEmployee) {
            employees.push_back(newEmployee);
            saveToFile();
            cout << "Employee added successfully!\n";
        } else {
            cout << "Invalid employee type or level!\n";
        }
    }

    void displayPayroll() {
        cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(15) << "Hourly Rate"
             << setw(15) << "Hours Worked" << setw(15) << "Salary" << setw(10)<<"level"<< endl;
        for (const auto& emp : employees) {
            emp->displayDetails();
        }
    }

    void updateEmployee() {
        int id;
        cout << "Enter Employee ID to Update: ";
        cin >> id;

        for (auto& emp : employees) {
            if (emp->getId() == id) {
                string name;
                double rate, hours;
                cout << "Enter New Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter New Hourly Rate: ";
                cin >> rate;
                cout << "Enter New Hours Worked: ";
                cin >> hours;

                // Update employee details
                *emp = Employee(id, name, rate, hours);
                saveToFile();
                cout << "Employee updated successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void deleteEmployee(int id) {
        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if ((*it)->getId() == id) {
                delete *it;
                employees.erase(it);
                saveToFile();
                cout << "Employee deleted successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }
};

int main() {
    Login log;
    PayrollSystem payroll;
    bool loggedIn = false;

    while (!loggedIn) {
        system("cls");
        int choice;
        cout << "Welcome to the System\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
             registration(log);
        } else if (choice == 2) {
            loggedIn = login();
        } else if (choice == 3) {
            cout << "Exiting...\n";
            return 0;
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    int option;
    do {
        system("cls");
        cout << "\nPayroll System Menu:\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Update Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Logout\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
        case 1: {
            int id;
            string name;
            double hourlyRate, hoursWorked;
            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Hourly Rate: ";
            cin >> hourlyRate;
            cout << "Enter Hours Worked: ";
            cin >> hoursWorked;
            payroll.addEmployee(id, name, hourlyRate, hoursWorked);
            break;
        }
        case 2:
            payroll.displayPayroll();
            break;
        case 3:
            payroll.updateEmployee();
            break;
        case 4: {
            int id;
            cout << "Enter Employee ID to Delete: ";
            cin >> id;
            payroll.deleteEmployee(id);
            break;
        }
        case 5:
            loggedIn = false;
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
        system("pause");
    } while (option != 5);

    return 0;
}

