
#include <iostream>
using namespace std;

int main() {
    int a, b, i = 0;
    cin >> a >> b;
    while (true) {
        i++;
        a = 3 * a;
        b = 2 * b;
        if (a > b) {
            cout << i << endl;
            break;
        }
    }
}
