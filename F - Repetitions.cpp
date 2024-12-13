#include <iostream>
using namespace std;

int main() {

    string s;
    cin>>s;
    /* long long a=0,t=0,c=0,g=0;
    for(int i=0;i<s.size();i++)
    {
        //long long a=0,t=0,c=0,g=0;
        if(s[i]=='A')
        {
            a++;
        } if(s[i]=='T')
        {
            t++;
        } if(s[i]=='C')
        {
            c++;
        } if(s[i]=='G')
        {
            g++;
        }
    }

    cout << max(max(a, t), max(c, g)) << endl;*/ // Variables to track the longest repetition for each character
    long long maxr=1;
    long long cr=1;
    for (int i= 1; i< s.size();i++) {
        if (s[i]==s[i-1])
        {

            cr++;
        }
        else {
            maxr = max(maxr,cr);
            cr=1;
        }
    }
    maxr=max(maxr,cr);

    cout << maxr<< endl;

    return 0;
}
