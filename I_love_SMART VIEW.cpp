#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ma=a[0];
    int mi=a[0];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>ma){ma=a[i];c++;}
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<mi){mi=a[i];c++;}
    }
   cout<<c<<endl;
   return 0;
}
