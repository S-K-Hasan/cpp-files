#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N + 1), suffix_sum(N + 1);

    // Read the array (1-based indexing)
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // Calculate suffix sums (start from N-1 to 1)
    suffix_sum[N] = A[N]; // Initialize the last suffix sum
    for (int i = N - 1; i >= 1; i--) {
        suffix_sum[i] = A[i] + suffix_sum[i + 1];
    }

    // Output the suffix sums (1-based indexing)
    for (int i = 1; i <= N; i++) {
        cout << suffix_sum[i] << " ";
    }
    cout << endl;

    return 0;
}
