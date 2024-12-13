#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;

    string n2=n;
    reverse(n2.begin(),n2.end());
   //if (n2[0]=='0')
    //{
  //      n2.erase(n2.begin());
  //  }
   while(n2[0]=='0'&&n2.size()>1)
    {
        n2.erase(n2.begin());
    }
    cout << n2 << endl;
    if(n==n2)
    {
        cout<<"YES"<<endl;
    } else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
