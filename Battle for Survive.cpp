#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       long long n;
       cin>>n;
       vector<long long>a(n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
        for(int i=0;i<n-1;i++)
       {
             for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] > a[i]) {
                a[i + 1] -= a[i]; // Fighter at index i+1 wins
            } else {
                a[i + 1] = a[i] - a[i + 1]; // Fighter at index i wins
            }
        }
       }
        cout << a[n - 1] << endl;
    }
 return 0;
}
