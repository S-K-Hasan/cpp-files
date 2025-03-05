#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--) {
            int n;
            cin>>n;
       vector<int>a;
       vector<int>b;
       for(int i=0;i<n;i++){int x; cin>>x; a.push_back(x);}
       for(int i=0;i<n;i++){int x; cin>>x; b.push_back(x);}
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());

    /*  bool found=false;
        do {
            set<int>c;
            for (int i=0;i<n;i++)
            {
                c.insert(a[i]+b[i]);
            }
            if (c.size()>=3) {
                found=true;
                break;
            }
        } while(next_permutation(a.begin(),a.end()));

        cout <<(found?"YES":"NO")<<endl;*/
         set<int>c;

        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                c.insert(a[i]+b[j]);
                if (c.size()>=3) break;
            }
            if (c.size()>=3) break;
        }

        cout<<(c.size()>= 3?"YES":"NO")<<endl;
}
return 0;
}
