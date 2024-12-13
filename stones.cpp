#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,a=0,i;
 cin>>n;
string s;
cin>>s;
  for(i=0;i<n;i++)
  {
      if(s[i]==s[i+1])
      {
          a++;
      }
  }
   cout<<a;
 return 0;
}




