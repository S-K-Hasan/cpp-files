#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the array in descending order
        sort(a.begin(), a.end(), greater<int>());

        int total_coins = 0; // This will store the total coins Monocarp takes
        int coins_added = 0; // This will store how many coins we added
        for (int i = 0; i < n; i++) {
            total_coins += a[i];
            if (total_coins >= k) {
                break;
            }
            coins_added += a[i];
        }

        cout << coins_added << endl;
    }

    return 0;
}
