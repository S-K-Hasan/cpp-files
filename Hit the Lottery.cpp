#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a = n / 100;
    n = n % 100;
    long long b = n / 20;
    n = n % 20;
    long long c = n / 10;
    n = n % 10;
    long long d = n / 5;
    n = n % 5;
    long long e = n;

    cout << (a + b + c + d + e) << endl;

    return 0;
}
