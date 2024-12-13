
#include <bits/stdc++.h>
using namespace std;

int main() {

 int n,p,q,i=0,c=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>p>>q;
     if(q-p>=2)
     {
         c++;
     }
 }

    cout<<c<<endl;

 return 0;
}
