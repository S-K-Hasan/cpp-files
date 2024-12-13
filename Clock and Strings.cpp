#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a,b,c,d;
        cin >> a>>b>>c>>d;
        if(d<c)
        {
            swap(d,c);
        }
        if(c<a&&a<d)
        {
            if(c<b&&b<d)
            {
                cout<<"NO"<<endl;
            }
            else{cout<<"YES"<<endl;}

        }
      else if(c<b&&b<d)
        {
            if(c<a&&a<d)
            {
                cout<<"NO"<<endl;
            }
            else{cout<<"YES"<<endl;}

        }
      else{cout<<"NO"<<endl;}
    }
return 0;
}
