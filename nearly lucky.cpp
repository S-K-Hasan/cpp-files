#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long c=0;
 string n;
 cin>>n;
 for(int i=0;i<n.size();i++)
 {
     if(n[i]=='4'||n[i]=='7')
     {
         c++;
     }

 }
  if(c==4||c==7)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
}
