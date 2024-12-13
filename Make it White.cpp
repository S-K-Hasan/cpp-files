#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
            int n;
            cin>>n;
            string s;
            cin>>s;
            int a=0,b=0;
            for(int i=0;i<n;i++)
            {
               if(s[i]=='B')
               {
                a=i;
                break;
               }
            }for(int i=0;i<n;i++)
            {
               if(s[i]=='B')
               {
                 b=i;
               }
            }

         cout<<(b-a)+1<<endl;
    }
 return 0;
}
