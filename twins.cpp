#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, coin, sum = 0, sum2 = 0, counter = 0;
    cin >> n;
    vector<int> coins(n);

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }
    sum = sum / 2;
    sort(coins.begin(), coins.end(), greater<int>());
    /*greater<int>():

greater<int>() is a comparison function provided by the C++ Standard Library that compares two integers and returns true if the first is greater than the second.
By passing greater<int>() as the third argument to sort(), the elements are sorted in descending order instead of the default ascending order.*/

    for(int i = 0; i < n; i++) {
        sum2 += coins[i];
        counter++;
        if(sum2 > sum) {
            cout << counter << endl;
            break;
        }
    }
    return 0;
}

