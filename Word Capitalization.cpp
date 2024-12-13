#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(i == 0) {
            t += toupper(s[i]);
        } else {
            t += s[i];
        }
    }
    cout << t << endl;
    return 0;
}
