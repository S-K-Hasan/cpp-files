#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

   /* vector<long long> v;
    for (long long i = 1; i <= n; i += 2)
    {
        v.push_back(i);
    }
    for (long long i = 2; i <= n; i += 2)
    {
        v.push_back(i);
    }
    cout << v[k - 1] << endl;
    */
    long long oc=(n + 1) / 2;
    if (k <= oc)
    {
        cout<<2*k-1<<endl;
    } else {
        cout<<2*(k-oc)<<endl;
    }
    return 0;

}
