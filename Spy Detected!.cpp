#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] != a[1] && a[1] == a[2]) {
            cout << "1" << endl;
        } else {
            int x = a[0];
            for (int i = 1; i < n; i++) {
                if (a[i] != x) {
                    cout << (i + 1) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
