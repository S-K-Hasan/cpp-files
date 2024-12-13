#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int c = 0;

        while (n != 0) {
            if (n % 4 == 0) {
                n -= 4;
            } else {
                n -= 2;
            }
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
