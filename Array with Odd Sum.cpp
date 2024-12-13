#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum = accumulate(a.begin(), a.end(), 0LL);

        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else {
            bool hasOdd = false;
            bool hasEven = false;
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0) {
                    hasEven = true;
                } else {
                    hasOdd = true;
                }
            }
            if (hasOdd && hasEven) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
