#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,zero=0,one=0;

        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
       /* if (n==1) cout<<1<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                // cin>>a[i];
                if(a[i]==0) zero++;
                else one++;
            }
            int res=min(one,zero);
            //cout<<min(sum1,sum2)<<endl;
            cout<<res<<endl;
        } */
        int maxb=0,currentb=0;

        for (int i=0;i<n;i++) {
            if (a[i]==0) {
                currentb++;
                maxb=max(maxb,currentb);
            } else {
                currentb=0;
            }
        }
        cout<<maxb<<endl;
    }
    return 0;
}
