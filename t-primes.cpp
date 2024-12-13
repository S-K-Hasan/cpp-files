#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[1000000] = {0}; // Array to mark non-prime numbers

    // Sieve of Eratosthenes to mark primes
    for (int i = 2; i < 1000000; i++) {
        if (a[i] == 0) { // If i is a prime
            for (int j = i * i; j < 1000000; j += i) { // Start from i*i, and mark multiples of i
                a[j] = 1; // Mark as non-prime
            }
        }
    }

    int x;
    cin >> x;
    long long b;
    long long sq;

    // Process each test case
    for (int i = 0; i < x; i++) {
        cin >> b;
        sq = sqrt(b);

        if (b == 1) {
            cout << "NO" << endl; // 1 is not a T-prime
        } else if (sq * sq == b && a[sq] == 0) {
            // Check if b is a perfect square and its square root is a prime number
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

