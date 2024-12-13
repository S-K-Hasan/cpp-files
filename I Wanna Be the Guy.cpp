#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,c=0;
    cin >> n;
    set<int>levels;
    int a,b;
    cin >> p;
  for(int i=0;i<p;i++)
  {
      cin>>a;
      levels.insert(a);
  }
  cin>>q;
    for(int i=0;i<q;i++)
  {
      cin>>b;
      levels.insert(b);
  }
   if(levels.size()==n)
   {
       cout<<"I become the guy."<<endl;
   }
   else
   {
       cout<<"Oh, my keyboard!"<<endl;
   }
}
