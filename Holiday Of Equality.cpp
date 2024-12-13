#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k=a[n-1];
    if(n==1)
    {
        cout<<0;
    }
    else{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[n-1])
        {
            break;
        }
        else{
            s=s+(k-a[i]);
        }
    }

    cout<<s<<endl;
   }
return 0;
}
