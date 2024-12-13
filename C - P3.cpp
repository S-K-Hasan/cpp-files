#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,m;
  cin>>n>>m;
  vector<long long>counter(m+1,0);
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      counter[x]++;
  }
  for(int i=1;i<=m;i++)
  {
      cout<<counter[i]<<endl;
  }
  return 0;
}
