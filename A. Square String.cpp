#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
            string s;
            cin>>s;
            int n=s.size();
            if(n%2==0){
                // string f,s;
                 string f=s.substr(0,n/2);
                 string sec=s.substr(n/2);
                 //cout<<f<<endl<<s<<endl
                 if(f==sec) cout<<"YES"<<endl;
                 else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
    }
return 0;
}
