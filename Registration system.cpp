#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long t;
    string s;
    map<string,int>regs;
    cin>>t;
    while(t--){
        cin>>s;
        if(regs[s]==0){
            cout<<"OK"<<endl;
            regs[s]=1;
        }
        else{
            cout<<s<<regs[s]<<endl;
            regs[s]++;
        }

    }
 return 0;
}
