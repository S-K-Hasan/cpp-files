#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> t;
    for(int i = 0; i < s.size(); i++) {
        t.insert(s[i]);

    }
    if(t.size()%2==0)
    {
        cout<< "CHAT WITH HER!" <<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

return 0;
}
