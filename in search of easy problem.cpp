
#include <bits/stdc++.h>
using namespace std;

int main() {

 int n,a,i=0,c=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>a;
     if(a==1)
     {
         c++;
     }
 }
 if(c==0)
 {
     cout<<"EASY"<<endl;
 }
 else{
    cout<<"HARD"<<endl;
 }
 return 0;
}
