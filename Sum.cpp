#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin >>t;
 while(t--)
{
   int x1,x2,x3;
   cin>>x1>>x2>>x3;
   int ma,mi;
   ma = max({x1,x2,x3});
   mi = min({x1,x2,x3});
   int c=(x1+x2+x3)-(ma+mi);
   if((mi+c)==ma)
   {
       cout<<"YES"<<endl;
   }
   else{cout<<"NO"<<endl;}

}
return 0;
}
