#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
    int sum=0,height=0,i=1;

    while(sum+(i*(i+1))/2<=n){
        sum += (i*(i+1))/2;
        height++;
        i++;
    }

    cout<<height<<endl;
return 0;
}
