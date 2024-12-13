#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n+1);
        vector<long long>presum(n+1),susum(n+1);
        a[0]=0;
        presum[0]=0;
        for (int i=1;i<= n;i++)
        {
            cin>>a[i];
            presum[i]=presum[i-1]+a[i];
        }
        susum[n] = a[n];
        for (int i= n-1;i>=1;i--)
        {
            susum[i]=a[i]+susum[i+1];
        }

      /*  for (int i = 1; i <= n; i++)
        {
            cout << presum[i] << " ";
        }
        cout << endl;

        for (int i = 1; i <= n; i++)
        {
            cout << susum[i] << " ";
        }
        cout << endl;*/
        vector<long long>sum(n+1);
        for(int i=1;i<=n;i++)
        {
            sum[i]=presum[i]+susum[i];
        }
        int minValue=sum[1];
        int minindex=1;
        for(int i=1;i<=n;i++)
        {
            if(sum[i]<minValue)
            {
                minValue=sum[i];
                minindex=i;
            }
        }
        cout<<minindex<<endl;
    }
    return 0;
}

