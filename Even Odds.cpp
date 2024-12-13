/*#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a;


    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            a.push_back(i);
        }
    }


    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a.push_back(i);
        }
    }


    if (k >= 1 && k <= a.size()) {
        cout << a[k-1] << endl;
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long odd_count = (n + 1) / 2;  // Total odd numbers in the range from 1 to n

    if (k <= odd_count) {
        // k-th odd number
        cout << 2 * k - 1 << endl;
    } else {
        // k-th even number
        k -= odd_count;  // Adjust k to be the index among even numbers
        cout << 2 * k << endl;
    }

    return 0;
}

