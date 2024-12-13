#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  vector<int>r(n);
  for(int i=0;i<n;i++)
  {
      r[i]=v[n-i-1];
  }
  for(int i=0;i<n;i++)
  {
      cout<<r[i]<<" ";
  }
  return 0;
}
