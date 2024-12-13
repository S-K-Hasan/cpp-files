#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
         int n,k;
         cin>>n>>k;
         int a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         int h=0,g=0;
          for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                h += a[i];
            } else if (a[i] == 0 && h > 0) {
                h -= 1;
                g += 1;
            }
        }
        cout<<g<<endl;
    }
 return 0;
}
