#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> g(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> t;
        g[t] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << g[i] << " ";
    }
    return 0;
}
