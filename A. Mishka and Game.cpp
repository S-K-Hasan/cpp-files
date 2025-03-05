#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m=0,c=0;
 cin>>n;
 while(n--){
    int a,b;
    cin>>a>>b;
   if(a>b) m++;
   if(b>a) c++;
 }
 if(m>c) cout<<"Mishka"<<endl;
 if(m==c) cout<<"Friendship is magic!^^"<<endl;
 if(c>m) cout<<"Chris"<<endl;

 return 0;
}
