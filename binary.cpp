#include <bits/stdc++.h>
using namespace std;

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
 a(){
    a1=0;
    a2=0;
    a3=0;
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
        ab[i] =  a(a1, a2, a3);
    }

    for (int i = 0; i < 3; i++) {
        ab[i].display();
    }
    return 0;
}
