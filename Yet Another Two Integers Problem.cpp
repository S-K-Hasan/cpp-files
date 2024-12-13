#include <iostream>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b;
        c=abs(a-b);
        if(c%10==0)
        {
            cout<<(c/10)<<endl;
        }
        else{
            cout<<((c/10)+1)<<endl;
        }

    }
 return 0;
}
