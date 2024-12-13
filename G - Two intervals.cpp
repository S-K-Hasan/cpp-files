
#include<bits/stdc++.h>
using  namespace std;
int main(){
      vector<int>a(2);
      vector<int>b(2);
      cin>>a[0]>>a[1];
      cin>>b[0]>>b[1];
      int start=max(a[0],b[0]);
      int ends=min(a[1],b[1]);
      if(start<=ends)
      {
          cout<<start<<" "<<ends;
      }
      else{
        cout<< -1 ;
      }
      return 0;
}
