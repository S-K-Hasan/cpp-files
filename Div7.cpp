#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (true) {
            if (n % 7 == 0 && n % 10 != 0) {
                cout << n << endl;
                break;
            }
            n++;
        }
    }
    return 0;
}

//not accepted
