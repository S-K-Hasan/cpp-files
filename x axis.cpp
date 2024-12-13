#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
    int a[2];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    int mx=a[0],mi=a[0];
    for(int i=0;i<3;i++)
    {
        if(a[i]>mx){mx=a[i];}
    }for(int i=0;i<3;i++)
    {
        if(a[i]<mi){mi=a[i];}
    }
    cout<<(mx-mi)<<endl;
    }
    return 0;
}
