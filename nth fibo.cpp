
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a=1,b=1,temp=0;
    if (n==1||n==2)
        {
        cout << 1 << endl;
        }
    else
      {
        for (int i=3;i<=n;i++)
         {
           temp=a+b;
           a=b;
           b=temp;
         }
       cout << temp<< endl;
      }
    return 0;
}
