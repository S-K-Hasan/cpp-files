#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,  x = 0;
     string s;
    cin >> n;
    while (n--)
     {
        cin>>s  ;
        if(s=="x++"|| s=="++x")
        {
            x++;
        }
        if(s=="x--"||s=="--x")
        {
            x--;
        }
     }
    cout << x << endl;
    return 0;
}

