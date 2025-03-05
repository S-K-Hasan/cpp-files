#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int range=5-k;
    int c=0;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        if((5-a[i])>=k)
        {
            c++;
        }
    }
  // if(c<3) cout<<0<<endl;
  // else if(c==3) cout<<1<<endl;
  // else
        cout<<c/3<<endl;
   return 0;
}
