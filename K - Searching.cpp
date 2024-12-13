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
  int x,c=0;
  cin>>x;
  for(int i=0;i<n;i++)
  {
      if(v[i]==x)
      {
          cout<<i;
          c=1;
          break;
      }
  }
   if(c==0)
   {
       cout<<-1;
   }

   return 0;
}
