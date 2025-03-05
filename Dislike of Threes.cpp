#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int>a;
    for (int i=1;a.size()<1001;i++) {

        if (i%3!=0&&i%10!=3) {
            a.push_back(i);
        }
    }
int t;
cin>>t;
while(t--)
{
    int k;
    cin>>k;
    cout<<a[k-1]<<endl;
}
return 0;
}
