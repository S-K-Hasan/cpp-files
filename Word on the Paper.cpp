#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long t;
 cin>>t;
 while(t--){

    char a[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> a[i][j];
        }
    }for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(a[i][j]!='.')
            {
                cout<<a[i][j];
            }
        }

    }
    cout<<endl;
 }

}
