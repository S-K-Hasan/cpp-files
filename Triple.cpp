/*#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin >> t;
    while (t--) {

            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            sort(a,a+1);
            int b=a[0];
            int c=1;
            for(int i=1;i<n;i++)
            {
                if(a[i]==b)
                {
                    c++;
                    if(c==3)
                    {
                        cout<<a[i]<<endl;
                        break;
                    }
                }
                else{
                    b=a[i];
                    c=1;
                }
            }
          if(c<3)
          {
              cout<<"-1"<<endl;
          }
    }
 return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end()); // Sort the entire array
        int b = a[0];
        int c = 1;
        bool found = false;
        for (int i = 1; i < n; i++) {
            if (a[i] == b) {
                c++;
                if (c == 3) {
                    cout << a[i] << endl;
                    found = true;
                    break;
                }
            } else {
                b = a[i];
                c = 1;
            }
        }
        if (!found) {
            cout << "-1" << endl;
        }
    }
    return 0;
}
