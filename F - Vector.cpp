#include<bits/stdc++.h>
using  namespace std;
int main(){
  int t;
  cin>>t;
  vector<int> a;
  while(t--){
    int q;
    cin>>q;
    if(q==0){
        int x;
        cin>>x;
        a.push_back(x);
    }
    else if(q==1){
        int p;
        cin>>p;
        cout<<a[p]<<endl;
    }
    else{
        a.pop_back();
    }
  }
  return 0;
}
