#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a=0,b=0,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else{
            b++;
        }
    }

  if(a>b)
  {
      cout<<"Anton"<<endl;
  }
  else  if(a==b){
    cout<<"Friendship"<<endl;
  }
  else{cout<<"Danik"<<endl;}
  return 0;
}
