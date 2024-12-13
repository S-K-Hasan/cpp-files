#include <bits/stdc++.h>
using namespace std;
int main()
{
long long n,k,c;
int i;
cin>>n>>k;
for(i=0;i<k;i++)
{
    c=n%10;
    if(c==0)
    {
        n=n/10;
    }
    else
    {
        n=n-1;
    }
}
cout<<n<<endl;
}

