#include <bits/stdc++.h>
using namespace std;

int main() {

 int n,h,a,i=0,c=0;
 cin>>n>>h;
  for (i=0;i<n;i++)
  {
      cin>>a;
      if(a<=h)
      {
          c++;
      }
        else{
        c=c+2;
        }
  }
 cout<<c<<endl;
 return 0;
}
