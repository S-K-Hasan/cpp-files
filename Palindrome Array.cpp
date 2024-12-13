#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
     vector<int> a(t);
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<t;i++){
      if(a[i]!=a[t-i-1])
       {
        c=1;
       }
    }
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
