#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a[4];
        double k = 0;

        for (int j = 0; j < 4; j++)
        {
           cin >> a[j];
        }

        for (int j = 1; j < 4; j++)
        {
           if (a[0] < a[j])
           {
               k++;
           }
        }

        cout << k << endl;
    }
    return 0;
}
