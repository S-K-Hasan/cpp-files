#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*int t;
    cin >> t;
    long long arr[t];


    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
     {
        long long n = arr[i], c = 0;

        for (int j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                c++;
            }
        }
        if (c % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }*/
    int a[1000000]={0};
     for (int i = 2; i < 1000000; i++)
     {

        for (int j = 2; i*j <1000000; j++)
        {
            a[i*j]=1;
        }
     }
     int x;
     cin>>x;
     long long b;
     long long sq;
     for (int i = 0; i < x; i++)
     {
      cin>>b;
      sq=sqrt(b);
      if(b==1){cout<<"NO"<<endl;}
      else if(sq*sq==b && a[sq]==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
     }

    return 0;
}

