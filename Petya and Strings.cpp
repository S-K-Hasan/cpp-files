#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,l1,l2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        l1=toupper(s1[i]);
        l2=toupper(s2[i]);
        if(l1==l2)
        {
          continue;
        }
        else if(l1<l2)
        {
            cout<<"-1"<<endl;
            break;
        }else
        {
            cout<<"1"<<endl;
            break;
        }
    }
    if(l1==l2)
    {
        cout<<"0"<<endl;
    }
return 0;
}
