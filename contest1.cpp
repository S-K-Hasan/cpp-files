#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     vector<int>v(n);
     int fib=0,fib1=1,fib2;
     for(int i=0;i<n;i++)
     {
         v[i] = fib;
         fib2=fib+fib1;
         fib=fib1;
         fib1=fib2;
     }

     for(int i=0;i<n;i++)
     {
        cout<<v[i]<<" ";
     }

    return 0;
}
