#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n,sum=0;
        cin>>n;
        string s;
        cin>>s;
         set<char> solved;
        for (int i=0;i<n;i++){
            if (solved.find(s[i])==solved.end()){
                sum+=2;
                solved.insert(s[i]);
            } else {
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}
