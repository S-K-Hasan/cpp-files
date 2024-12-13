#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;

   vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int sm=v[0];
    int c=0;
    for (int i = 0; i < n; ++i) {
        if(v[i]<sm){
            sm=v[i];
            c=i;
        }
    }
   cout<<sm<<" "<<c+1;

   return 0;
}

