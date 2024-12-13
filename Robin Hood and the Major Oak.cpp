
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
          long long n,k;
          cin>>n>>k;
          long long c=0;
          if(n==1){
            cout<<"NO"<<endl;
            continue;
          }
          if(n>1){
            if(k>=1&&k<2)
            {
               for(int i=0;i<n;i++)
               {
                   c=1+c+pow(i,i) ;
               }
            }
            else{
                for(int i=0;i<n;i++)
               {
                   c=c+pow(i,i) ;
               }
            }
          }
        if(c%2==0)  {
            cout<<"YES"<<endl;

        }
        else{cout<<"NO"<<endl;}
    }

return 0;
}
??wrong
