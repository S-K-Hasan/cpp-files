#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--) {
       int x,y,n,c=0;
       cin>>x>>y>>n;
     /*  for (int k=0;k<=n;k++){
         if (k%x==y){ c++;}

       } */

    //   cout<<c<<endl;
     long long k=n-(n%x)+y;
        if (k>n){k-=x;}
        cout<<k<<endl;
    }
return 0;
}
