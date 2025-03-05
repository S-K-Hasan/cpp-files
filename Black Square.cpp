#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[4];int sum=0;
   string s;
   for(int i=0;i<4;i++){cin>>a[i];}
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
      /* if(s[i]==1) sum=sum+a[0];
        if(s[i]==2) sum=sum+a[1];
         if(s[i]==3) sum=sum+a[2];
          if(s[i]==4) sum=sum+a[3];*/
        int index=s[i]-'1';
        sum +=a[index];

   }
   cout<<sum<<endl;
return 0;
}
