
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, p = 0, m = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        p += (b - a); // Assuming b is added and a is subtracted
        if (p > m) {
            m = p;
        }
    }
    cout << m << endl;
    return 0;
}
