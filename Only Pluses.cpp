#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max_product = a * b * c;

        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j;
                int n_a = a + i;
                int n_b = b + j;
                int n_c = c + k;
                max_product = max(max_product, n_a * n_b * n_c);
            }
        }

        cout << max_product << endl;
    }
    return 0;
}

