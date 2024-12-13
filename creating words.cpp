#include <bits/stdc++.h>
using namespace std;

int main() {

    int i;
   cin>>i;
    while (i--)
    {
    string a,b;
    cin>>a>>b;
        char t;
        t=a[0];
        a[0]=b[0];
        b[0]=t;
    cout<<a<<" "<<b<<endl;
    }
 return 0;
}
