#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int x = r;
        int c = 0;
        while (x > 1)
        {
            x = x / 2;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
