
Here are the C++ programs for each of the mentioned tasks:

1. Program to create a directory that contains personal information:
cpp
Copy code
#include <iostream>
#include <string>
using namespace std;

class Directory {
private:
    string name;
    string address;
    string telephone;
    string mobile;
    string headOfFamily;

public:
    void setDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Telephone Number (with STD code): ";
        getline(cin, telephone);
        cout << "Enter Mobile Number: ";
        getline(cin, mobile);
        cout << "Enter Head of Family: ";
        getline(cin, headOfFamily);
    }

    void displayDetails() {
        cout << "\nDirectory Information:\n";
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone Number: " << telephone << endl;
        cout << "Mobile Number: " << mobile << endl;
        cout << "Head of Family: " << headOfFamily << endl;
    }
};

int main() {
    Directory dir;
    dir.setDetails();
    dir.displayDetails();
    return 0;
}
2. Friend Function Program for Circle:
cpp
Copy code
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    string centerPoint;

public:
    Circle(double r, string center) : radius(r), centerPoint(center) {}

    friend double findCircumference(Circle c);
};

double findCircumference(Circle c) {
    return 2 * M_PI * c.radius;
}

int main() {
    Circle c1(5.0, "Center");
    cout << "Circumference of the circle: " << findCircumference(c1) << endl;
    return 0;
}
3. Friend Function Program for Complex Numbers:
cpp
Copy code
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.0, 4.0), c2(1.0, 2.0);
    Complex result = add(c1, c2);
    cout << "Sum of Complex Numbers: " << result.real << " + " << result.imag << "i" << endl;
    return 0;
}
4. Friend Function Program for BankAccount:
cpp
Copy code
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    string accountNumber;

public:
    BankAccount(double b, string accNum) : balance(b), accountNumber(accNum) {}

    friend double getBalance(BankAccount b);
};

double getBalance(BankAccount b) {
    return b.balance;
}

int main() {
    BankAccount b1(5000.0, "BA1234");
    cout << "Account Balance: " << getBalance(b1) << endl;
    return 0;
}
5. Inline Function for Conversion from Pounds to Kilograms:
cpp
Copy code
#include <iostream>
using namespace std;

inline double kg(double pounds) {
    return pounds * 0.453592;
}

int main() {
    double pounds;
    cout << "Enter weight in pounds: ";
    cin >> pounds;
    cout << "Weight in kilograms: " << kg(pounds) << endl;
    return 0;
}
6. Inline Function for Numbers Divisible by 9 Between 100 and 200:
cpp
Copy code
#include <iostream>
using namespace std;

inline void findDivisibleBy9() {
    int count = 0, sum = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            count++;
            sum += i;
        }
    }
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
}

int main() {
    findDivisibleBy9();
    return 0;
}
7. Inline Function for Fibonacci Series:
cpp
Copy code
#include <iostream>
using namespace std;

inline int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    cout << "Enter number of terms in Fibonacci series: ";
    cin >> terms;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
8. Conditional Program for Eligibility for Admission:
cpp
Copy code
#include <iostream>
using namespace std;

int main() {
    int math, phy, chem, total;
    cout << "Enter Marks in Math: ";
    cin >> math;
    cout << "Enter Marks in Physics: ";
    cin >> phy;
    cout << "Enter Marks in Chemistry: ";
    cin >> chem;

    total = math + phy + chem;

    if ((math >= 65 && phy >= 55 && chem >= 50 && total >= 180) || (math + phy >= 140)) {
        cout << "Eligible for admission.\n";
    } else {
        cout << "Not eligible for admission.\n";
    }

    return 0;
}
9. Switch Case Program to Check Positive, Negative, or Zero:
cpp
Copy code
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num) {
        case 0:
            cout << "Zero\n";
            break;
        default:
            if (num > 0)
                cout << "Positive\n";
            else
                cout << "Negative\n";
            break;
    }

    return 0;
}
10. Program to Calculate Bike Mileage:
cpp
Copy code
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int distance;
    float fuel;

    cout << "Enter total distance traveled (in km): ";
    cin >> distance;
    cout << "Enter fuel consumed (in liters): ";
    cin >> fuel;

    if (fuel != 0) {
        float mileage = distance / fuel;
        cout << "Bike mileage: " << fixed << setprecision(2) << mileage << " km/l\n";
    } else {
        cout << "Fuel cannot be zero!\n";
    }

    return 0;
}
