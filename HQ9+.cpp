#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    cin >> p;

    for (int i = 0; i < p.size(); i++) {
        // Check for any of the specific characters
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            cout << "YES" << endl;
            return 0; // Exit as soon as we find one of the characters
        }
    }

    // If no match was found after checking the entire string
    cout << "NO" << endl;

    return 0;
}



/*#include <bits/stdc++.h>
using namespace std;

int main() {

     string p;
     cin>>p;
     for(int i=0;i<p.size();i++)
     {
         if(p[i]=='H'||p[i]=='Q'||p[i]=='9'||p[i]=='+'){

            cout<<"YES"<<endl;
            break;
         }
         else{
            cout<<"NO"<<endl;
            break;
         }
     }

}*/
