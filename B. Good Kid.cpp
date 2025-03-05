#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
   /*  if (a[0]==0) a[0]++;

      else if(a[0]==1) a[0]++;
      else if(a[1]==0) a[1]++;
      else a[n-1]++; */
      a[0]++;
      long long product=1;
      for(int i=0;i<n;i++)
      {
          product=product*a[i];
      }
      cout<<product<<endl;

    }
return 0;
}
