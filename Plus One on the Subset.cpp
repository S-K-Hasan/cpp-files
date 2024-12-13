#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

          int n;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          {
              cin>>a[i];
          }
         int mi=a[0];
         int ma=a[0];
         for(int i=0;i<n;i++)
          {
              if(a[i]>ma)
              {
                  ma=a[i];
              }
          } for(int i=0;i<n;i++)
          {
              if(a[i]<mi)
              {
                  mi=a[i];
              }
          }
          cout<<(ma-mi)<<endl;
          //cout<<(ma)<<endl;cout<<(mi)<<endl;
    }
  return 0;
}
