#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    pair<int,int>arr[10000];
    bool f=1;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(s<=arr[i].first){
            f=0;
            break;
        }
        s+=arr[i].second;
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 return 0;
}
