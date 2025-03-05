#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a[3];
  cin>>n;
  for(int i=0;i<3;i++){
    cin>>a[i];
  }
  sort(a,a+3);
 // if(n==a[2]) cout<<1<<endl;
  //else{
    int c=1;
   for(int i=0;i<3;i++)
  {
      if(a[i]+a[i+1]<=n){c++;}
  }
  cout<<c<<endl;
//}
return 0;
}
