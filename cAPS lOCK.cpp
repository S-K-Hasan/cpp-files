/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    for(int i=1;i<s.size();i++)
    {
        s[i]= tolower (s[i]);
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
return 0;
} */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool allCaps = true, capsAfterFirst = true;

    // Check if the entire string is in uppercase
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            allCaps = false;
            break;
        }
    }

    // Check if only the first letter is lowercase and the rest are uppercase
    if (islower(s[0])) {
        for (int i = 1; i < s.size(); i++) {
            if (islower(s[i])) {
                capsAfterFirst = false;
                break;
            }
        }
    } else {
        capsAfterFirst = false;
    }

    // If either condition holds, change the case of all letters
    if (allCaps || capsAfterFirst) {
        for (int i = 0; i < s.size(); i++) {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}

