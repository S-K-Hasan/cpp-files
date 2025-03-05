#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0},j=0;
    for(int i=0;i<n;i++)
    {
        a[s[i]-'A']++;
        if(a[s[i]-'A']>1&&s[i-1]!=s[i])
        {
            j=1;
            break;
        }
    }
    if (j==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

return 0;
}
