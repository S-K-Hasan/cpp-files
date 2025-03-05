#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
     string a;
     cin>>a;
        vector<char>s;

        for(int i=0;i<a.size();i++)
        {
           s.push_back(a[i]);

        }
        for(int i=1;i<a.size();i++)
           {
               if(s[i]==s[i+1])
               {
                   s.pop_back();
               }
           }
        cout<<s.size()<<endl;
     }
      return 0;
 }
