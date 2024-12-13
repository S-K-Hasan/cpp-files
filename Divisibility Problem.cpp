/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,c=0;
        cin>>a>>b;
        while(a%b!=0)
        {
            a=a+1;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b, c;
        cin >> a >> b;

        if(a % b == 0)
        {
            c = 0;
        }
        else
        {
            c = b - (a % b);
        }

        cout << c << endl;
    }
    return 0;
}
