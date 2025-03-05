#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
       int n,sum1=0,sum2=0;
       cin>>n;
       int a[n];
     //  vector<int>a1;
     //  vector<int>a2;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n/2;i++)
       {
         // a1.push_back(a[i]);
          sum1=sum1+a[i];
       }for(int i=n/2;i<n;i++)
       {
          //a1.push_back(a[i]);
           sum2=sum2+a[i];
       }

        if(sum1%2==0&&sum2%2==0) cout<<"YES"<<endl;
        else if(sum1%2!=0&&sum2%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
