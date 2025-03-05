#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c2 = n / 3; // Number of 2-burle coins
        int c1 = n / 3; // Number of 1-burle coins (initially equal)

        if (n % 3 == 1) c1++; // If remainder is 1, give 1 more 1-burle coin
        else if (n % 3 == 2) c2++; // If remainder is 2, give 1 more 2-burle coin

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}

