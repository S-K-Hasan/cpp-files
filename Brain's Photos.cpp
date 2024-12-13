#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, co = 0;
    cin >> r >> c;
    char a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y') {
                co++;
            }
        }
    }

    if (co == 0) {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
    return 0;
}
