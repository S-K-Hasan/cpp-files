#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np, x, y, z, m;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    x = k * l / nl;
    y = c * d;
    z = p / np;
    m = min(x, min(y,z));
    cout << m / n << endl;
    return 0;
}
