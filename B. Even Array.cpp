#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
    cin>>n;
    vector<int>a(n);

    int wrong_even=0,wrong_odd=0;

    for (int i=0;i<n;i++) {
        cin >> a[i];
        }

     for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%2!=0) wrong_even++;
            } else {
                if(a[i]%2==0) wrong_odd++;
            }
           }

    if (wrong_even==wrong_odd) cout<<wrong_even<<endl;
    else cout<<-1<<endl;

    }
    return 0;
}
