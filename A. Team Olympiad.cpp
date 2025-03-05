#include <bits/stdc++.h>
using namespace std;

/*int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    int a1=0,a2=0,a3=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if(a[i]==1) a1++;
        if(a[i]==2) a2++;
        if(a[3]==3) a3++;
    }
    sort(b,b+n);
    while (a1!=0  && a2!=0 && a3!=0)
    {
        c++;
        a1--;
        a2--;
        a3--;
    }
    cout<<c<<endl;

}*/


int main()
{
   int n;
   cin >> n;
   vector<int>p,m,pe;
   int s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s==1) p.push_back(i);
        else if(s==2) m.push_back(i);
        else if(s==3) pe.push_back(i);
    }

    int t=min({(int)p.size(),(int)m.size(),(int)pe.size()});
    cout<<t<<endl;
    for (int i=0;i<t;i++)
    {
        cout<< p[i]<<" "<<m[i]<<" "<<pe[i]<<endl;
    }
    return 0;
}

