#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int c=0;
    getline(cin,a);
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()-1;i++)
    {
        if (a[i]=='{'||a[i]=='}'||a[i]==','||a[i]==' ')
            {
                continue;
            }
        else
        {
           if(a[i]!=a[i+1])
           {
               c++;
           }
        }
    }
    cout<<c<<endl;
    return 0;
}
