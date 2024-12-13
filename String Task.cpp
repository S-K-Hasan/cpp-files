/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            result += s[i];
        }
    }
    string finalResult = "";
    for (int i = 0; i < result.size(); i++) {
        finalResult += '.';
        finalResult += result[i];
    }

    cout << finalResult << endl;

    return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < s.size(); i++) {
        char ch = tolower(s[i]);
        if (ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i') {
            result += '.';
            result += ch;
        }
    }
    cout << result << endl;

    return 0;
}
