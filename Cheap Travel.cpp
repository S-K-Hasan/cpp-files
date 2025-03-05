#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    int costUsingM=(n/m)*b;
    int remain=n%m;
    int costOfA=remain*a;
    int total=costUsingM+costOfA;
    int totalCostWithM=((n + m-1)/m)*b;
    int costWithOnlyA =n*a;
    cout << min({total,totalCostWithM,costWithOnlyA})<< endl;

    return 0;
}

