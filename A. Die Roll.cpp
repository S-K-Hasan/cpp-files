
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Y,W;
    cin>>Y>>W;

    int max1=max(Y,W);
    int f=6-max1+1;
    int d=6;


    int a =f,b=d;
    while(b){
        a=a%b;
        swap(a,b);
    }
    int GCD=a;
    cout <<(f/GCD)<<"/"<<(d/GCD)<<endl;
    return 0;
}
