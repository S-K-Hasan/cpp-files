#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--) {
       int sum=0;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='1'){sum=sum+1;}
       }
       cout<<sum<<endl;
    }
return 0;
}
