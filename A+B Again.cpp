#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        int l = a % 10;
        a = a / 10;
        int sl = a % 10;
        cout << sl + l << endl;
    }
    return 0;
}
