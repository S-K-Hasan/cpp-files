#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Create the prefix sum array
    vector<long long> prefixSum(n);
    prefixSum[0] = v[0];

    // Fill the prefix sum array
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    // Process each query
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        // Convert to 0-based index
        a--;  // Decrement to convert to 0-based
        b--;  // Decrement to convert to 0-based

        // Calculate the sum for the range [a, b]
        long long sum = prefixSum[b];

        if (a > 0) {
            sum -= prefixSum[a - 1];  // Subtract the sum before index a
        }

        // Output the result for the current query
        cout << sum << endl;
    }

    return 0;
}
