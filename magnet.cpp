#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string fst="";
    string scnd="";
    while(n--)
    {
        cin>>scnd;
        if(fst!=scnd)
        {
            c++;
            fst=scnd;
        }
    }
    cout<<c<< endl;
return 0;
}
