#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int c = 1, maxLength = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) {
            c++;
        } else {
            maxLength = max(maxLength, c);
            c = 1;
        }
    }

    maxLength = max(maxLength, c);

    cout << maxLength << endl;
    return 0;
}

