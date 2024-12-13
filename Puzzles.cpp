#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int b=(a[m-1]-a[0]);
    for(int i=n;i<=m;i++)
    {
        ans=a[i-1]-a[i-n];
        ans=abs(ans);
        b=min(ans,b);
    }
    cout<<b<<endl;
 return 0;
}
