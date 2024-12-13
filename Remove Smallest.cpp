#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);

        bool canMakeEqual = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                canMakeEqual = false;
                break;
            }
        }

        if (canMakeEqual) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
