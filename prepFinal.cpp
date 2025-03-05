#include <bits/stdc++.h>
using namespace std;
/*
//using new keyword to use array of object and parameterized constructor
class a {
    int a1;
    int a2;
    int a3;

public:
    a(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }

    void display() {
        cout << "For a class: " << a1 << " " << a2 << " " << a3 << endl;
    }
};

int main() {

    a* ab[3];
    for (int i = 0; i < 3; i++) {
        int a1, a2, a3;
        cout << "Enter a1: ";
        cin >> a1;
        cout << "Enter a2: ";
        cin >> a2;
        cout << "Enter a3: ";
        cin >> a3;
        ab[i] = new a(a1, a2, a3);
    }

    for (int i = 0; i < 3; i++) {
        ab[i]->display();
    }
    return 0;
}
*/

/*
// array of objects and parameterised constructors
class a {
    int a1;
    int a2;
    int a3;
public:
    a(){
    a1=0;
    a2=0;
    a3=0;
    }
    a(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }
    void setValues(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }
    void display() {
        cout << "For a class: " << a1 << " " << a2 << " " << a3 << endl;
    }
};
int main() {
    a ab[3];
    for (int i = 0; i < 3; i++) {
        int a1, a2, a3;
        cout << "Enter a1: ";
        cin >> a1;
        cout << "Enter a2: ";
        cin >> a2;
        cout << "Enter a3: ";
        cin >> a3;
        ab[i].setValues(a1, a2, a3);
    }
    for (int i = 0; i < 3; i++) {
        ab[i].display();
    }
    return 0;
}*/
/*
//copy constructor
class a {
    int a1;
    int a2;
    int a3;

public:
    a(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }
    a(a &ab){
     a1=ab.a1;
     a2=ab.a2;
     a3=ab.a3;
    }
    void display() {
        cout << "For a class: " << a1 << " " << a2 << " " << a3 << endl;
    }
};

int main()
{
    a ab(1,2,3);
    a cd(ab);
    ab.display();
    cd.display();
} */
/*
//coppy constructor and dynamic memory allocation
class a {
    int a1;
    int a2;
    int a3;

public:

    a(int a1, int a2, int a3) {
        this->a1=a1;
        this->a2=a2;
        this->a3=a3;
    }


    a(const a &other) {
        a1 = other.a1;
        a2 = other.a2;
        a3 = other.a3;
        cout << "Copy constructor called!" << endl;
    }
    void setValues(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }

    void display() {
        cout << "For a class: " << a1 << " " << a2 << " " << a3 << endl;
    }
};

int main() {
    a* ab[3];

    for (int i = 0; i < 3; i++) {
        int a1, a2, a3;
        cout << "Enter a1: ";
        cin >> a1;
        cout << "Enter a2: ";
        cin >> a2;
        cout << "Enter a3: ";
        cin >> a3;
        ab[i] = new a(a1, a2, a3);
    }

    a copyObj = *ab[0];

    for (int i = 0; i < 3; i++) {
        ab[i]->display();
    }
    cout << "Details of the copied object:" << endl;
    copyObj.display();

    return 0;
}
*/
/*
// operator ovrloading
class a {
    int a1;
    int a2;
    int a3;

public:
    a(){
    a1=0;
    a2=0;
    a3=0;
    }
    a(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }
    a(a &ab){
     a1=ab.a1;
     a2=ab.a2;
     a3=ab.a3;
    }
    void display() {
        cout << "For a class: " << a1 << " " << a2 << " " << a3 << endl;
    }
    // binary
a operator +(a ab)
    {
    a temp;
    temp.a1=a1+ab.a1;
    temp.a2=a2+ab.a2;
    temp.a3=a3+ab.a3;
    return temp;
    }
a operator -(a ab)
    {
    a temp;
    temp.a1=a1-ab.a1;
    temp.a2=a2-ab.a2;
    temp.a3=a3-ab.a3;
    return temp;
    }
//unary
//pre increment
/*void operator ++()
{
    a1++;
    a2++;
    a3++;
}
//post increment
void operator ++(int)
{
    a1++;
    a2++;
    a3++;
}
// for incrementing and assigning in obj
a operator ++()
{
    a temp;
    temp.a1=a1++;
    temp.a2=a2++;
    temp.a3=a3++;
    return temp;
}
a operator ++(int)
{
    a temp;
    temp.a1=a1++;
    temp.a2=a2++;
    temp.a3=a3++;
    return temp;
}
};
int main()
{
    a ab(3,5,7);
    a bc(8,9,10);
    a cd;
    cd= ab+bc;
    // how it shows,ab.+(bc);
    a de;
    de=cd-bc;
    //cd.display();
   // de.display();
   // ++ab;
   // ab.display();
   // bc++;
   //bc.display();
 //  a fg;
   //fg=++bc;
   fg.display();
} */
class a {
    int a1;
    int a2;
    int a3;

public:
    a(){
    a1=0;
    a2=0;
    a3=0;
    }
    a(int a1, int a2, int a3) {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }

    void display() {
        cout << "For a class: " << a1 << " " << a2 << " " << a3 << endl;
    }

};

int main()
{

}
