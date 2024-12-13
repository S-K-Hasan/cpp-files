#include <bits/stdc++.h>
using namespace std;

int main() {

    string s,t="";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
           t=t+s[i] ;
        }
    }
    sort(t.begin(),t.end());
    cout<<t[0];
    for(int i=1;i<t.size();i++)
    {
        cout<<'+'<<t[i];
    }
    cout<<endl;
    return 0;
}
