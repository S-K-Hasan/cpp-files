/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int a[4];
      int c=0;
      for(int i=0;i<4;i++)
      {
          cin>>a[i];
      }
      int f= a[2]-a[1];
      if(a[0]+a[1]==f) c++;
      if(f+a[2]==a[3]) c++;
      if(f+a[1]==a[2]) c++;

      cout<<c<<endl;
    }
 return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int a1,a2,a4,a5;
    cin>>a1>>a2>>a4 >>a5;

    int fibo=0;
    for (int a3=-200;a3<=200;a3++) {
        int count= 0;
        if (a1+a2==a3) count++;
        if (a2+a3==a4) count++;
        if (a3+a4==a5) count++;

        fibo = max(fibo,count);
    }

    cout<<fibo<<endl;
    }
return 0;
}
