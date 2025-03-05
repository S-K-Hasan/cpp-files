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
        s.pop_back();
        s.pop_back();
         s.push_back('i');
         for(int i=0;i<s.size();i++)
        {
           cout<<s[i];
        }
        cout<<endl;
     }
      return 0;
 }
