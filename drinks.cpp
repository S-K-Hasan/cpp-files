#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,s=0,v,a;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        s=s+v;
    }
    a=s/n;
    cout<<fixed<<setprecision(12)<<a<<endl;
    return 0;
}


