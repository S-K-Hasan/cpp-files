//Design a "RollerCoaster" class that simulates a ride with excitement levels ranging from 1 to 10.
//Overload the unary operator - to represent a decrease in the excitement level when the roller
//coaster experiences a scary part. Each usage of the operator should decrease the excitement level
//by 1 until it reaches 1.

#include <iostream>
using namespace std;

class RollerCoaster {
    int excitement;

public:
    RollerCoaster(int level) {
      excitement=level;
      }


    void operator-() {
        if (excitement > 1) {
            --excitement;
        } else {
            cout << "Excitement level cannot go below 1!" << endl;
        }
    }

    void display() {
        cout << "Excitement Level: " << excitement << endl;
    }
};

int main() {
    RollerCoaster rc(5);
    rc.display();
    -rc;
    rc.display();
    return 0;
}
/*There's a magical "Tree" class that grows older as time passes. Overload the unary operator ++ to
represent the tree's age increment. When the operator is used, the tree's age should increase by
one year.*/
#include <iostream>
using namespace std;

class MagicalTree {
    int age;

public:
    MagicalTree(int age){
    this->age=age;}

    void operator++() {
        ++age;
    }

    void display() {
        cout << "Tree Age: " << age << endl;
    }
};

int main() {
    MagicalTree tree(10);
    tree.display();
    ++tree;
    tree.display();
    return 0;
}
/*Build a "Compass" class that simulates a compass needle pointing to a specific direction.
Overload the unary operator + to represent a clockwise rotation of the needle by a certain angle,
and - to represent an anticlockwise rotation by the same angle.*/
#include <iostream>
using namespace std;

class Compass {
    int angle;

public:
    Compass(int angle){
     angle=angle % 360;
    }
    void operator+() {
        angle = (angle + 90) % 360;
    }
    void operator-() {
        angle = (angle - 90 + 360) % 360;
    }

    void display() {
        cout << "Compass Direction: " << angle << " degrees" << endl;
    }
};

int main() {
    Compass c(0);
    c.display();
    +c;
    c.display();
    -c;
    c.display();
    return 0;
}
/* Create an "Elevator" class that
represents an elevator's current floor number. Overload the unary operator ++ to represent the
elevator moving up one floor, and -- to represent it moving down one floor. Limit the elevator's
movement between floors 1 and 10. */

#include <iostream>
using namespace std;
class Elevator {

    int currentFloor;
public:
    Elevator(){
     currentFloor=1;
    }

    void operator++() {
        if (currentFloor < 10) {
            ++currentFloor;
        }
    }

    void operator--() {
        if (currentFloor > 1) {
            --currentFloor;
        }
    }

    int getCurrentFloor() const {
        return currentFloor;
    }

};

int main() {
    Elevator elevator;
    cout << "Starting floor: "<<elevator.getCurrentFloor()<<endl;
    ++elevator;
    cout << "Floor after moving up: "<<elevator.getCurrentFloor()<<endl;

    ++elevator;
    ++elevator;
    cout << "Floor after moving up twice: "<<elevator.getCurrentFloor()<<endl;

    --elevator;
    cout <<"Floor after moving down:"<< elevator.getCurrentFloor()<<endl;
    for (int i = 0; i < 15; ++i) {
        ++elevator;
    }
    std<<"Floor after attempting to move beyond limit: " << elevator.getCurrentFloor() <<endl;

    return 0;
}
/*Design a Currency class that represents different currencies and their values in USD. Overload
the * operator to convert an amount from one currency to another*/

#include <iostream>
using namespace std;

class Currency {
    double amount;

public:
    Currency(double amt){
    amount=amt;
    }

    double operator*(double exchangeRate) {
        return amount*exchangeRate;
    }

    void display() {
        cout << "Amount: $" << amount << endl;
    }
};

int main() {
    Currency usd(100);
    usd.display();

    double inEUR = usd * 0.85;
    cout << "Converted Amount in EUR: €" << inEUR << endl;
    return 0;
}
/*Implement an Alien class that has attributes like strength, technology level, and diplomacy.
Overload the > operator to determine which alien race is more dominant based on these attributes.*/

#include <iostream>
using namespace std;

class Alien {
    int raceStrength;
    int techLevel;
    int diplomacy;

public:
    Alien(int race, int tech, int dip) {
     raceStrength=race;
     techLevel=tech;
     diplomacy=dip;
    }
    bool operator >(Alien other) {
        int totalStrength1 = raceStrength + techLevel + diplomacy;
        int totalStrength2 = other.raceStrength + other.techLevel + other.diplomacy;
        return totalStrength1 > totalStrength2;
    }

    void display() {
        cout << "Alien Stats: Race = " << raceStrength
             << ", Tech = " << techLevel
             << ", Diplomacy = " << diplomacy << endl;
    }
};

int main() {
    Alien alien1(5, 7, 6);
    Alien alien2(6, 5, 7);

    alien1.display();
    alien2.display();

    if (alien1 > alien2)
        cout << "Alien 1 is stronger!" << endl;
    else
        cout << "Alien 2 is stronger!" << endl;

    return 0;
}
/*Implement a Vehicle class with properties like speed and acceleration. Overload the < operator to
compare two vehicles and determine which one is faster.*/
#include <iostream>
using namespace std;

class Vehicle {
    int speed;
    int acceleration;

public:
    Vehicle(int s, int a){
      speed=s;
      acceleration=a;
    }

    bool operator<( Vehicle v){
        return speed < v.speed;
    }

    void display(){
        cout << "Speed: " << speed << " km/h, Acceleration: " << acceleration << " m/s²" << endl;
    }
};

int main() {
    Vehicle car1(120, 10);
    Vehicle car2(150, 12);

    car1.display();
    car2.display();

    if (car1 < car2)
        cout << "Car 1 is slower than Car 2." << endl;
    else
        cout << "Car 1 is faster than Car 2." << endl;

    return 0;
}
/*Design a C++ class to represent a Product. The class should have the following attributes: product
name, product code, product price. The class should also have the following methods:
getProductName(), getProductCode(), getProductPrice(), setProductName(), setProductCode(),
setProductPrice(). The class should have a constructor that initializes the product name, product
code and product price. Write a C++ program to create a Product object and show the
information.*/
#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    int productCode;
    double price;

public:

    Product(string n, int code, double p){
         name=n;
         productCode=code;
         price=p;
    }


    void setProductName(string n) { name = n; }
    void setProductCode(int code) { productCode = code; }
    void setProductPrice(double p) { price = p; }

    string getProductName()  { return name; }
    int getProductCode() { return productCode; }
    double getProductPrice()  { return price; }

    void displayProduct() {
        cout << "Product Name: " << name << ", Code: " << productCode << ", Price: $" << price << endl;
    }
};

int main() {
    Product p("Laptop", 101, 1200.50);
    p.displayProduct();
    p.setProductName("Smartphone");
    p.setProductCode(102);
    p.setProductPrice(800.75);
    p.displayProduct();

    return 0;
}
/*Design a C++ class to represent a Bank account. The class should have the following attributes:
account number, account holder name, account balance. The class should also have the following
methods: deposit(), withdraw(), getBalance() and displayAccountDetails(). The class should have
a constructor that initializes the account number, account holder name and account balance.Write
a C++ program to create a Bank account object and deposit and withdraw some money from the
account. Then display the account details.
*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountHolder;
    int accountNumber;
    double balance;

public:

    BankAccount(string holder, int accNo, double bal)
     {
      accountHolder=holder;
      accountNumber=accNo;
      balance=bal;
     }


    void deposit(double amount) {
        balance += amount;
        cout << "Deposited:" << amount << endl;
    }


    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn:" << amount << endl;
        }
    }

    void displayAccountDetails(){
        cout << "Account Holder: " << accountHolder
             << ", Account Number: " << accountNumber
             << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("shanto", 12345, 500.00);

    account.displayAccountDetails();

    account.deposit(200.00);
    account.withdraw(100.00);

    account.displayAccountDetails();

    return 0;
}
/*Design a C++ class to represent a Shape. The class should have the following attributes: color,
area, perimeter. The class should also have the following methods: getArea(), getPerimeter(),
setColor(), drawShape(). The class should have a constructor that initializes the color, area and
perimeter.Write a C++ program to create a Shape object and set the color and area of the shape.
Then, draw the shape on the console*/
#include <iostream>
#include <string>
using namespace std;

class Shape {
    string color;
    double area;
    double perimeter;

public:

    Shape(string c, double a, double p){
     color=c;
     area=a;
     perimeter=p;
    }


    void setColor(string c) { color = c; }

    double getArea(){ return area; }

    double getPerimeter(){ return perimeter; }

    void drawShape() const {
        cout << "Drawing a " << color << " shape with area: " << area
             << " and perimeter: " << perimeter << endl;
    }
};

int main() {
    Shape s("Red", 20.5, 15.0);
    s.drawShape();
    s.setColor("Blue");
    s.drawShape();
    return 0;
}

/*Design a C++ class to represent a Student. The class should have the following attributes: student
name, student ID, student marks. The class should also have the following methods:
getStudentName(), getStudentID(), getStudentMarks(), setStudentName(), setStudentID(),
setStudentMarks(), calculateGrade(). The class should have a constructor that initializes the
student name, student ID and student marks. Write a C++ program to create a Student object and
set the student name, student ID and student marks. Then, calculate the grade of the student and
print it on the console.
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int studentID;
    float studentMarks;

public:
    Student(string name, int id, float marks) {
        studentName = name;
        studentID = id;
        studentMarks = marks;
    }

    string getStudentName() { return studentName; }
    int getStudentID() { return studentID; }
    float getStudentMarks() { return studentMarks; }

    void setStudentName(string name) { studentName = name; }
    void setStudentID(int id) { studentID = id; }
    void setStudentMarks(float marks) { studentMarks = marks; }


    char calculateGrade() {
        if (studentMarks >= 90) return 'A';
        else if (studentMarks >= 80) return 'B';
        else if (studentMarks >= 70) return 'C';
        else if (studentMarks >= 60) return 'D';
        else return 'F';
    }


    void display() {
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Student Marks: " << studentMarks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};
int main() {
    Student s("John Doe", 12345, 85.0);
    s.display();
    return 0;
}

/*Design a C++ class to represent a Book. The class should have the following attributes: book title,
book author, book price. The class should also have the following methods: getBookTitle(),
getBookAuthor(), getBookPrice(), setBookTitle(), setBookAuthor(), setBookPrice(). The class
should have a constructor that initializes the book title, book author and book price. Write a C++
program to create a Book object and set the book title, book author and book price. Then, display
the book details on the console.
*/
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookTitle;
    string bookAuthor;
    float bookPrice;

public:

    Book(string title, string author, float price) {
        bookTitle = title;
        bookAuthor = author;
        bookPrice = price;
    }


    string getBookTitle() { return bookTitle; }
    string getBookAuthor() { return bookAuthor; }
    float getBookPrice() { return bookPrice; }

    void setBookTitle(string title) { bookTitle = title; }
    void setBookAuthor(string author) { bookAuthor = author; }
    void setBookPrice(float price) { bookPrice = price; }


    void display() {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Book Author: " << bookAuthor << endl;
        cout << "Book Price: " << bookPrice << endl;
    }
};

int main() {
    Book b("C++ Programming", "bbb", 45.99);
    b.display();
    return 0;
}

/* Design a C++ class to represent a Circle. The class should have the following attributes: radius,
area, perimeter. The class should also have the following methods: getRadius(), getArea(),
getPerimeter(), setRadius(), drawCircle(). The class should have a constructor that initializes the
radius, area and perimeter. Write a C++ program to create a Circle object and set the radius. Then,
calculate the area and perimeter of the circle and print it on the console.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    float radius;

public:

    Circle(float r) {
        radius = r;
    }

    float getRadius() { return radius; }

    void setRadius(float r) { radius = r; }

    float getArea() { return 3.1416 * radius * radius; }

    float getPerimeter() { return 2 *3.1416* radius; }


    void drawCircle() {
        cout << "Drawing a Circle with radius: " << radius << endl;
    }

    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Circle c(5.0);
    c.display();
    c.drawCircle();
    return 0;
}

/*Create a class named Person with a data member to store the name of the person. Create another
class named Student that inherits from the Person class and has a data member to store the student
ID. Write a program to create a Student object and print out their name and ID*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int ID;

public:
    Person(string personName, int personID) {
        name = personName;
        ID = personID;
    }

    string getName() { return name; }
    int getID() { return ID; }
    void setName(string personName) { name = personName; }
    void setID(int personID) { ID = personID; }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
    }
};

int main() {
    Person p("shaNTO", 101);
    p.display();
    p.setName("hasan);
    p.setID(102);
    p.display();

    return 0;
}
//inheritence and using abstact class and pure virtual function
/*Create a class named Shape with data members to store the width and height of a shape. Create
another class named Rectangle that inherits from the Shape class and has a method to calculate
the area of the rectangle. Write a program to create a Rectangle object and print out its are*/

#include <iostream>
using namespace std;


class Shape {
public:
    virtual float calculateArea()=0;
};
class Rectangle : public Shape {
private:
    float width;
    float height;

public:
    Rectangle(float w, float h) {
        width = w;
        height = h;
    }
    float calculateArea(){
        return width * height;
    }

    void display() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect(5.0, 4.0);
    rect.display();
    return 0;
}

/*Create a class named Vehicle with data members to store the number of wheels and the top speed
of a vehicle. Create another class named Car that inherits from the Vehicle class and has a data
member to store the number of doors. Write a program to create a Car object and print out its
number of wheels, top speed, and number of doors.
*/
#include <iostream>
using namespace std;


class Vehicle {
protected:
    int numberOfWheels;

public:

    Vehicle(int wheels) {
        numberOfWheels = wheels;
    }
    void setNumberOfWheels(int wheels) { numberOfWheels = wheels; }
    int getNumberOfWheels() { return numberOfWheels; }
};

class Car : public Vehicle {
private:
    int numberOfDoors;
public:
    Car(int wheels, int doors) : Vehicle(wheels) {
        numberOfDoors = doors;
    }
    void setNumberOfDoors(int doors) { numberOfDoors = doors; }
    int getNumberOfDoors() { return numberOfDoors; }

    void display() {
        cout << "Number of Wheels: " << numberOfWheels << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};
int main() {
    Car myCar(4, 2);
    myCar.display();
    return 0;
}

/*Create a class named Animal with a data member to store the name of the animal. Create another
class named Cat that inherits from the Animal class and has a data member to store the number of
lives of a cat. Write a program to create a Cat object and print out its name and number of lives.
*/
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
public:

    Animal( string animalName){
     name=animalName;
    }

    string getName() const {
        return name;
    }
};

class Cat : public Animal {
private:
    int lives;

public:

    Cat( string catName, int catLives) : Animal(catName) {
     lives=catLives;
    }

    int getLives(){
        return lives;
    }
};

int main() {

    Cat myCat("ok?", 9);

    cout << "Cat Name: " << myCat.getName() << endl;
    cout << "Number of Lives: " << myCat.getLives() << endl;

    return 0;
}

/*Create a class named BankAccount with a data member to store the account balance. Create
another class named SavingsAccount that inherits from the BankAccount class and has a data
member to store the interest rate of the account. Write a program to create a SavingsAccount
object and print out its account balance and interest rate.
*/
#include <iostream>
using namespace std;

class BankAccount {
protected:
    float accountBalance;

public:

    BankAccount(float balance) {
        accountBalance = balance;
    }

    void setAccountBalance(float balance) { accountBalance = balance; }
    float getAccountBalance() { return accountBalance; }
};

class SavingsAccount : public BankAccount {
private:
    float interestRate;

public:
    SavingsAccount(float balance, float rate) : BankAccount(balance) {
        interestRate = rate;
    }

    void setInterestRate(float rate) { interestRate = rate; }
    float getInterestRate() { return interestRate; }


    void applyInterest() {
        accountBalance += accountBalance * (interestRate / 100);
    }
    void display() {
        cout << "Account Balance: " << accountBalance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount account(1000, 5);
    account.display();
    account.applyInterest();
    cout << "After applying interest:" << endl;
    account.display();

    return 0;
}
/*Create a class named Person with data members to store the name and age of a person. Create
another class named Student with data members to store the student ID and GPA. Create a third
class named StudentAthlete that inherits from both the Student and Person classes and has a data
member to store the sport played by the student athlete. Write a program to create a
StudentAthlete object and print out their name, age, student ID, GPA, and sport.*/

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
       name=n;
       age=a;
    }
};

class Student {
public:
    int studentID;
    double GPA;

    Student(int id, double gpa) {
     studentID=id;
     GPA=gpa;
    }
};

class StudentAthlete : public Person, public Student {
public:
    string sport;

    StudentAthlete(string n, int a, int id, double gpa, string s)
        : Person(n, a), Student(id, gpa){
         sport=s;
        }


    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Sport: " << sport << endl;
    }
};

int main() {

    StudentAthlete athlete("shanto", 20, 12345, 3.8, "Basketball");

    athlete.printDetails();

    return 0;
}

/*Create a class named Shape with data members to store the width and height of a shape. Create
another class named Color with a data member to store the color of a shape. Create a third class
named ColoredShape that inherits from both the Shape and Color classes and has a method to
print out the width, height, and color of the shape. Write a program to create a ColoredShape
object and print out its width, height, and color.*/
#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    double width;
    double height;
    Shape(double w, double h)  {
     width=w;
     height=h;
    }
};

class Color {
public:
    string color;
    Color(string c) { color=c;}
};

class ColoredShape : public Shape, public Color {
public:
    ColoredShape(double w, double h, string c)
        : Shape(w, h), Color(c) {}

    void printDetails() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {

    ColoredShape rectangle(10.5, 5.3, "Red");

    rectangle.printDetails();

    return 0;
}

/*Create a class named Vehicle with data members to store the number of wheels and the top speed
of a vehicle. Create another class named Engine with a data member to store the horsepower of
the engine. Create a third class named Car that inherits from both the Vehicle and Engine classes
and has a data member to store the number of doors. Write a program to create a Car object and
print out its number of wheels, top speed, horsepower, and number of doors*/
#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
public:
    int wheels;
    int topSpeed;

    Vehicle(int w, int speed)  {
     wheels=w;
     topSpeed=speed;
    }
};

class Engine {
public:
    int horsepower;
    Engine(int hp)  { horsepower=hp}
};

class Car : public Vehicle, public Engine {
public:
    int doors;

    Car(int w, int speed, int hp, int d)
        : Vehicle(w, speed), Engine(hp), doors(d) {}

    void printDetails() {
        cout << "Number of Wheels: " << wheels << endl;
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
        cout << "Horsepower: " << horsepower << " HP" << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

int main() {

    Car car(4, 220, 300, 4);

    car.printDetails();

    return 0;
}

/* Create a class named Animal with data members to store the name and age of the animal. Create
another class named Pet with a data member to store the owner of the pet. Create a third class
named PetAnimal that inherits from both the Animal and Pet classes and has a data member
*/
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;
    int age;
    Animal(string n, int a){
     name=n;
     age=a;
    }
};

class Pet {
public:
    string owner;
    Pet(string o){ owner=o;}
};

class PetAnimal : public Animal, public Pet {
public:
    string type;

    PetAnimal(string n, int a, string o, string t)
        : Animal(n, a), Pet(o){
          type=t;
        }

    void printDetails() {
        cout << "Animal Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Owner: " << owner << endl;
        cout << "Type: " << type << endl;
    }
};

int main() {

    PetAnimal myPet("B", 3, "A", "Dog");

    myPet.printDetails();

    return 0;
}
/*Create two classes named “Mammals” and “MarineAnimals.” Create another class called
“BlueWhale,” which inherits both the above classes. Now, create a function in each of these
classes that prints "I am a mammal,” "I am a marine animal," and "I belong to both the categories:
Mammals as well as Marine Animals," respectively. Now, create an object for each of the above
classes and try calling – a function of Mammals by the object of Mammal – a function of
MarineAnimal by the object of MarineAnimal – a function of BlueWhale by the object of
BlueWhale – a function of each of its parents by the object of BlueWhale*/
#include <iostream>
using namespace std;

class Mammals {
public:
    void display() {
        cout << "I am a mammal." << endl;
    }
};
class MarineAnimals {
public:
    void display() {
        cout << "I am a marine animal." << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void display() {
        cout << "I belong to both categories: Mammals and Marine Animals." << endl;
    }
};

int main() {
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;

    cout << "Mammal:" << endl;
    mammal.display();

    cout << "Marine Animal:" << endl;
    marineAnimal.display();

    cout << "Blue Whale:" << endl;
    blueWhale.display();

    return 0;
}

/* Make a Fruit class with a data member to calculate the number of fruits in a basket. Create two
other classes named Apples and Mangoes to calculate the number of apples and mangoes in the
basket. Print the number of fruits of each type and the total number of fruits in the basket.
*/
#include <iostream>
using namespace std;

class Fruit {
public:
    int totalFruits;
    Fruit() : totalFruits(0) {}

    void addFruits(int count) {
        totalFruits += count;
    }
    int getTotalFruits() const {
        return totalFruits;
    }
};


class Apples : public Fruit {
public:
    int numApples;

    Apples(int count) : numApples(count) {
        addFruits(count);
    }
};

class Mangoes : public Fruit {
public:
    int numMangoes;

    Mangoes(int count) : numMangoes(count) {
        addFruits(count);
    }
};

int main() {

    Apples apples(10);
    Mangoes mangoes(15);
    cout << "Number of Apples: " << apples.numApples << endl;
    cout << "Number of Mangoes: " << mangoes.numMangoes << endl;

    int totalFruits = apples.numApples + mangoes.numMangoes;
    cout << "Total Number of Fruits: " << totalFruits << endl;

    return 0;
}
//function overloading
/* Alice is developing a calculator application in C++. She wants to allow the user to perform
operations on integers, doubles, and long doubles. To accomplish this, she uses function
overloading to define different versions of the calculate() function that take different parameter
types.
*/
#include <iostream>
using namespace std;

class Calculator {
public:
    int calculate(int a, int b) {
        return a + b;
    }

    double calculate(double a, double b) {
        return a + b;
    }

    long double calculate(long double a, long double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    int intResult = calc.calculate(10, 20);
    double doubleResult = calc.calculate(12.5, 3.7);
    long double longDoubleResult = calc.calculate(1.234567890123456L, 9.876543210987654L);


    cout << "Integer result: " << intResult << endl;
    cout << "Double result: " << doubleResult << endl;
    cout << "Long double result: " << longDoubleResult << endl;

    return 0;
}

/* Charlie is working on a database application in C++. He wants to allow users to query the
database using different data types, such as integers, strings, and dates. He uses function
overloading to define different versions of the query() function that take different parameter types*/
#include <iostream>
#include <string>
using namespace std;

class Database {
public:

    void query(int id) {
        cout << "Querying database for record with ID: " << id << endl;
    }

    void query(string keyword) {
        cout << "Querying database for records matching keyword: " << keyword << endl;
    }

    void query(string startDate, string endDate) {
        cout << "Querying database for records from " << startDate << " to " << endDate << endl;
    }
};

int main() {
    Database db;
    db.query(101);
    db.query("abb");
    db.query("2023-01-01", "2023-12-31");
    return 0;
}
 /*Bob is building a game engine in C++. He wants to provide different versions of the
loadTexture() function that can load textures from files, from memory, or from network streams.
He uses function overloading to define different versions of the function that take different input
sources.*/
#include <iostream>
#include <string>
using namespace std;

class TextureLoader {
public:

    void loadTexture( string filePath) {
        cout << "Loading texture from file: " << filePath << endl;

    }


    void loadTexture( char memory, int size) {
        cout << "Loading texture from memory buffer of size: " << size << " bytes" << endl;

    }


    void loadTextureFromNetwork(string url) {
        cout << "Loading texture from network stream: " << url << endl;

    }
};

int main() {
    TextureLoader loader;

    loader.loadTexture("assets/texture.png");

    loader.loadTexture('a', 8);

    loader.loadTextureFromNetwork("http:shan55o.com");



    return 0;
}
