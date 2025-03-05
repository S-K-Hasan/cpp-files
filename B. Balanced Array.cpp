#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int sum1=0,sum2=0;
        vector<int>a(n);
        if(n%2==0){
            if(n%4==0){
                 cout<<"YES"<<endl;
                 for(int i=0;i<n;i++){
                        //int x;
                    if(i%2==0)
                    {
                       int x=i;
                        a.push_back(x);
                        sum1=sum1+x;
                    }for(int i=0;i<n;i++){
                        int x;
                    if(i%2!=0)
                    {
                      int  x=i;
                        a.push_back(x);
                        sum2=sum2+x;
                    }
                 }
                 int c=sum1-sum2;
                 int x=a.back();
                 a.back()=x+c;

                 for(int i=0;i<n;i++){
                     cout<<a[i]<<" ";
                 }
            }

        }
        else cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;

}

}
