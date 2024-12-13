#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int x, y;
        cin >> x >> y;

        if (n == 0) {
            cout << 0 << endl;
        } else {
            //
            long long time = (n + min(x, y) - 1) / min(x, y);
            cout << time << endl;
        }
    }

    return 0;
}
