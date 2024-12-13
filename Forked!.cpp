#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        // Fixed the variable name from `directions` to `dirs`
        vector<pair<int, int>> dirs = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pair<int, int>> st1, st2;

        for (auto d : dirs) {
            int x = xk + d.first; // Corrected from d.first() to d.first
            int y = yk + d.second; // Corrected from d.second() to d.second
            st1.insert(make_pair(x, y));

            x = xq + d.first; // Same change here
            y = yq + d.second; // Same change here
            st2.insert(make_pair(x, y));
        }

        int ans = 0;
        for (auto pos : st1) {
            // Checking if pos is found in st2
            if (st2.find(pos) != st2.end()) {
                ans++;
            }
        }

        cout << ans << endl; // Changed nl to endl
    }

    return 0;
}

