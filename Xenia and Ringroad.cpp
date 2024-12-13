#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long ar[b];
    for(int i=0;i<b;i++)
    {
        cin>>ar[i];
    }
    long long c=ar[0]-1;
    for(int i=0;i<b-1;i++)
    {
        if(ar[i+1]<ar[i])
        {
            c=c+ (a-(ar[i]-ar[i+1]));
        }
        else if(ar[i+1]>ar[i])
        {
            c=c+(ar[i+1]-ar[i]);
        }
    }
    cout<<c<<endl;
    return 0;
}
