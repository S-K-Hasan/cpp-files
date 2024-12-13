#include <bits/stdc++.h>
using namespace std;

int main() {

 /*   int a,b,c,sum=0;
    cin>>a>>b>>c;
    if(a+b*c>sum){
        sum=a+b*c;
    }if(a*(b+c)>sum){
        sum=a*(b+c);
    }if(a*b*c>sum){
        sum=a*b*c;
    }if((a+b)*c>sum){
        sum=(a+b)*c;
    }
    cout<<sum<<endl; */
  /*  int a, b, c;
    cin >> a >> b >> c;

    int sum = max({a + b * c, a * (b + c), a * b * c, (a + b) * c});

    cout << sum << endl; */

    int a, b, c, sum = 0;
    cin >> a >> b >> c;

    sum = max({a + b * c, a * (b + c), a * b * c, (a + b) * c, a + b + c});

    cout << sum << endl;

 return 0;
}
