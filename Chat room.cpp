#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,t="hello";
     cin>>s;
     int j=0;
     for(int i=0;i<s.size();i++)
     {
         if(t[j]==s[i]){
            j++;
         }
     }
    if(j==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
