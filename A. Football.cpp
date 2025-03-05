#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a=0,b=0;
  string a1,b1;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++) {
    cin>>s[i];
  }
  a1=s[0];
  for(int i=0;i<n;i++) {
   if(s[i]!=s[0])
   {
       b1=s[i];
       break;
   }
  }
  for(int i=0;i<n;i++) {
   if(s[i]==a1) a++;
   if(s[i]==b1) b++;

  }
  if(a>b) cout<<a1;
  else cout<< b1;

return 0;
}
