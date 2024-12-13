#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sum = 0, c = 0;
    cin >> n >> k;
    k = 240 - k;

    for (int i = 1; i <= n; i++) {
        if (sum + i * 5 <= k) {
            sum += i * 5;
            c++;
        } else {
            break;
        }
    }

    cout << c << endl;
    return 0;
}
