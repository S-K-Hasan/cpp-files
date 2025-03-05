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
       //if(n%2!=0) cout<<"NO"<<endl;
      // else{

       for(int i=0;i<n;i++)
       {
         // a1.push_back(a[i]);
         if(a[i]==1) sum1=sum1+a[i];
         else sum2=sum2+a[i];
       }
       int total=sum1+(sum2);
       // if(sum1==sum2) cout<<"YES"<<endl;
      //  else if(sum1%2!=0&&sum2%2!=0) cout<<"YES"<<endl;
      //  else cout<<"NO"<<endl;
        //}
         if (total%2!=0) {
            cout <<"NO"<<endl;
        } else {
            int half=total/2;
            if (half%2==0||(sum1>0)) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
return 0;
}
