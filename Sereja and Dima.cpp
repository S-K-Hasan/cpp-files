/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, s = 0, d = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = n - 1; i >= 0; i -= 2) {
        s += a[i];
        if (i - 1 >= 0) {
            d += a[i - 1];
        }
    }

    cout << s << " " << d << endl;
    return 0;
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, s = 0, d = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--) {
        if ((n - 1 - i) % 2 == 0) {
            s += a[i];
        } else {
            d += a[i];
        }
    }

    cout << s << " " << d << endl;
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int s = 0, d = 0;
    int left = 0, right = n - 1;

    for (int turn = 0; left <= right; turn++) {
        if (a[left] > a[right]) {
            if (turn % 2 == 0) {
                s += a[left];
            } else {
                d += a[left];
            }
            left++;
        } else {
            if (turn % 2 == 0) {
                s += a[right];
            } else {
                d += a[right];
            }
            right--;
        }
    }

    cout << s << " " << d << endl;
    return 0;
}

