#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long k,n,w,s=0,i;
 cin>>k>>n>>w;
 for(i=1;i<=w;i++)
 {
   s =s+(i*k);
 }
 if(s>n)
 {
     cout<<(s-n)<<endl;
 }
 else{
    cout<< "0" <<endl;
 }
 return 0;
}
