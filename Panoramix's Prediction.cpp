#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t =-1;
    cin >> n >> m;

    for (int i=n+1;i<=50;i++)
    {
        bool isPrime=true;

        if(i<2) isPrime=false;
        if (i>2&&i%2==0) isPrime=false;

        for(int j=3;j*j<=i;j+=2)
        {
            if(i%j==0) {
                isPrime=false;
                break;
            }
        }

        if(isPrime) {
            t=i;
            break;
        }
    }

    if (t==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

