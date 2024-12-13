#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x1,x2,x3;
   cin>>x1>>x2>>x3;
   int ma,mi;
   ma = max({x1,x2,x3});
   mi = min({x1,x2,x3});
   cout<<(ma-mi)<<endl;
   return 0;
}
