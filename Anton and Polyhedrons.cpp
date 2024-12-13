#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string t="Tetrahedron" ;
    string cu="Cube" ;
    string o="Octahedron";
    string d="Dodecahedron";
    string i="Icosahedron";
    for(int j=0;j<n;j++)
    {
        string s;
        cin>>s;
        if(s==t)
        {
            c=c+4;
        }if(s==cu)
        {
            c=c+6;
        }if(s==o)
        {
            c=c+8;
        }if(s==d)
        {
            c=c+12;
        }if(s==i)
        {
            c=c+20;
        }
    }
    cout<<c<<endl;
    return 0;
}
