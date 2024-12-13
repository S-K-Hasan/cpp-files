#include <bits/stdc++.h>
using namespace std;
int main()
{
 int u=0,l=0,i;
 string s;
 cin>>s;
 for (i=0;i<s.size();i++)
 {
     if(isupper(s[i]))
     {
         u++;
     }
     else
     {
        l++;
     }
 }
    if(u>l)
    {
      for (i=0;i<s.size();i++)
      {
          cout<<char(toupper(s[i]));
      }

    }
    else
    {
      for (i=0;i<s.size();i++)
      {
          cout<<char(tolower(s[i]));
      }
    }
    return 0;
}
