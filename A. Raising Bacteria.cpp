#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,c=0;
    cin>>n;
    while(n!=0)
    {
        if (n%2==1) c++;
        n=n/2;
    }
    cout<<c<<endl;
return 0;
}
