#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int a[n-1];
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    int position = 0;
    while (position < t-1) {
        position += a[position];
        if (position == t-1) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
