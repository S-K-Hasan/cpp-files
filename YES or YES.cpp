#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {


    string a,b,c;
    cin>>a;
    b="YES";
     for (int i=0;i<a.size();i++)
      {
          c=c+char(toupper(a[i]));
      }
    if(c==b)
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
    }
    return 0;
}
