#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum = 0;
    int x, y, z;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        sum = sum + (x + y + z);
    }
    if(sum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
