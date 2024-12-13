#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int c=0;
    int flag=0;

    while (flag==0) {
          flag =0;
        for (int i=0;i<n;i++)
        {
            if (a[i]%2!=0)
            {
                flag =1;
                break;
            }
            a[i]/= 2;
        }
        if (flag==0)
        {
            c++;
        }
    }

    cout << c<< endl;

    return 0;
}
