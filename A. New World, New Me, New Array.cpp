#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,k,p;
        cin>>n>>k>>p;

        if (k>n*p||k<-n*p)
        {
            cout<<-1<<endl;
            continue;
        }

        int min_operations=(abs(k)+p-1)/p;
        cout<<min_operations<<endl;
    }

    return 0;
}
