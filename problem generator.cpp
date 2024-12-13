#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'A') a++;
            else if(s[i] == 'B') b++;
            else if(s[i] == 'C') c++;
            else if(s[i] == 'D') d++;
            else if(s[i] == 'E') e++;
            else if(s[i] == 'F') f++;
            else if(s[i] == 'G') g++;
        }

        int needed = 0;
        if(a < m) needed += (m - a);
        if(b < m) needed += (m - b);
        if(c < m) needed += (m - c);
        if(d < m) needed += (m - d);
        if(e < m) needed += (m - e);
        if(f < m) needed += (m - f);
        if(g < m) needed += (m - g);

        cout << needed << endl;
    }

    return 0;
}
