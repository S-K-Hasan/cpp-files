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
  int mini=*min_element(v.begin(), v.end());
  int maxi=*max_element(v.begin(), v.end());
  int m=0,k=0;
  for(int i=0;i<n;i++)
  {
      if(v[i]==maxi)
      {
          v[i]=mini;
          m=1;
      }else if(v[i]==mini)
      {
          v[i]=maxi;
          k=1;
      }
      if(m==1 && k==1){break;}
  }
   for(int i=0;i<n;i++)
  {
      cout<<v[i]<<" ";
  }
  return 0;
}
