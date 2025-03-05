#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    while(t--){
        char a[3];
        int c=0;
        for(int i=0;i<3;i++){
        cin>>a[i];
       }
       if(a[2]=='a'&&a[0]!='c') cout<<"NO"<<endl;
       else if(a[0]=='c'&&a[2]!='a') cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }
return 0;
}
