#include <bits/stdc++.h>
using namespace std;

int main() {

    double a,b;
    cin>>a>>b;
    int floor1=floor(a/b);
    int ceil1=ceil(a/b);
    int round1=round(a/b);

    cout<<"floor "<< a<< " / "<<b<< " = " << floor1<<endl;
    cout<<"ceil "<<a<<" / "<<b<< " = " << ceil1<<endl;
    cout<<"round "<< a<< " / "<<b<<" = "<<round1<<endl;
    return 0;
}
