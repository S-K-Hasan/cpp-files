#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            vector<int>b(n+1);
            for (int i=1;i<=n;i++)
            {
              b[i]=a[i];
            }
            for(int i=l;i<=r;i++)
            {
                b[i]=k;
            }
            long long sum=0;
            for(int i=1;i<=n;i++)
            {
                sum=sum+b[i];
            }
            //cout<<sum<<endl;
            if(sum%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
