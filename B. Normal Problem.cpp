#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        b=a;

        reverse(b.begin(), b.end());

        for(int i=0; i<b.size();i++) {
            if (b[i]=='q') b[i]='p';
            else if (b[i]=='p') b[i]='q';
        }

        cout<<b<<endl;
    }
    return 0;
}

