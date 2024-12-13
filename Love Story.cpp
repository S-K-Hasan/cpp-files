#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin >> t;
    while (t--) {
        int c=0;
        string b="codeforces";

        string a;
        cin >> a;

        for(int i=0;i<10;i++)
         {
             if (a[i]!=b[i])
             {
                 c++;
             }
         }
         cout<<c<<endl;
    }

}
