
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,a,x,y;
    cin >> m>>n>>a;
    if(m%a==0){x=n/a;}
    else{x=(n/a)+1;}
    if(n%a==0){y=m/a;}
    else{y=(m/a)+1;}
    cout<<x*y<<endl;


    return 0;
}
