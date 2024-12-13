#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int bigger = max(a, b);

        while (true) {
            if (bigger % a == 0 && bigger % b == 0) {
                cout << bigger << endl;
                break;
            }
            bigger++;
        }
    }
    return 0;
}
