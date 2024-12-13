#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int>a(3);
    vector<int>b(3);
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        b[i]=x;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<b[i]<<endl;
    }

return 0;
}
