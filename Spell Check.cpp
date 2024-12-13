#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "Timur";
    sort(target.begin(), target.end());

    while (t--) {
        int n;
        cin >> n;
        string g;
        cin >> g;

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        sort(g.begin(), g.end());

        if (g == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
