
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];

            if (i == j) {
                primaryDiagonalSum += arr[i][j];
            }

            if (i + j == n - 1) {
                secondaryDiagonalSum += arr[i][j];
            }
        }
    }


    int difference = abs(primaryDiagonalSum - secondaryDiagonalSum);
    cout << difference << endl;

    return 0;
}
