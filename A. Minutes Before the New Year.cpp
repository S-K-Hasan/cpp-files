#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int h,m;
        cin>>h>>m;
        int left= ((24-h)*60 )-m;
        cout<<abs(left)<<endl;
    }
return 0;
}
