#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxIndex = 0, minIndex = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > a[maxIndex]) {
            maxIndex = i;
        }
        if(a[i] <= a[minIndex]) {
            minIndex = i;
        }
    }

    int swaps = maxIndex;
    if(minIndex > maxIndex) {
        swaps += (n - 1 - minIndex);
    } else {
        swaps += (n - 1 - minIndex - 1);
    }

    cout << swaps << endl;

    return 0;
}

