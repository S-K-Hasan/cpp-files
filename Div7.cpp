#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n%7;
        int a=7-x;
        int last=n%10;

        if(n%7==0){n=n;}
        else if(last+a<10){n=n+a;}
        else{n=n-a;}

        cout<<n<<endl;
    }
return 0;
}*/
int main() {
    int t;
    cin >> t;
   /* while (t--) {
        long long n;
        cin >> n;

        int x=n%7;

        if (x <=3)
        {
            n=n-x;
        } else
        {
            n=n+(7-x);
        }

        cout <<n<< endl;
    } */

    while(t--)
    {
        long long n;
        cin>>n;
        if(n%7==0){cout<<n<<endl; continue;}
        n=10*(n/10);
        if(n%7==0){cout<<n<<endl; continue;}
        n++;
        while(n%10!=0)
        {
            if(n%7==0){break;}
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
