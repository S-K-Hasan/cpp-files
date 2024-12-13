#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
 cin>>t;
 while(t--)
 {
     int a[2];
     for(int i=0;i<2;i++)
     {
         cin>>a[i];
     }
     sort(a,a+2);
    cout<<a[0]<<" "<<a[1]<<endl;
 }
}
