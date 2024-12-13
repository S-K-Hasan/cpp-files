#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    vector<int>v;
    while(t--)
    {
    long long n,ans;
    vector<int>v;
    cin>>n;
    if(n%10!=0){v.push_back(n%10);}
    ans=n%10;
    n=n-ans;
    if(n%100!=0){v.push_back(n%100);}
    ans=n%100;
    n=n-ans;
    if(n%1000!=0){v.push_back(n%1000);}
    ans=n%1000;
    n=n-ans;
    if(n%10000!=0){v.push_back(n%10000);}
    ans=n%10000;
    n=n-ans;
    if(n>=10000&&n%10000==0){v.push_back(n);}

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    }
}
