
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   cin>>n;
   long long lastDelet=n/10;
   long long lastdigit =n%10;
   long long secondlastdelete=(n/100)*10 +lastdigit;
   //cout<<n<<endl<<lastdigit<<endl<<lastDelet<<endl<<secondlastdelete;
   long long max1=max(lastDelet,secondlastdelete);
   long long account= max(n,max1);
   cout<<account<<endl;
   return 0;
}
