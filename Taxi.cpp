/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0, c = 0, t;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    t=sum;
    c=sum/4;
    sum=t%4;
    if(sum==0){cout << c << endl;}
    else{cout<<c+1<<endl;}

}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    // ইনপুট গ্রহণ করা
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    // গ্রুপ সংখ্যা গোনা
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) count1++;
        else if (a[i] == 2) count2++;
        else if (a[i] == 3) count3++;
        else if (a[i] == 4) count4++;
    }

    int taxis = count4;  // গ্রুপ ৪ এর জন্য প্রতিটি ট্যাক্সি আলাদা

    // গ্রুপ ৩ এর সাথে গ্রুপ ১ মিলিয়ে ট্যাক্সি বরাদ্দ করা
    taxis += count3;
    count1 = max(0, count1 - count3);

    // দুইটি গ্রুপ ২ একসাথে ট্যাক্সি ব্যবহার করবে
    taxis += count2 / 2;
    if (count2 % 2 == 1) {
        taxis += 1;  // এক গ্রুপ ২ জন্য অতিরিক্ত ট্যাক্সি
        count1 = max(0, count1 - 2);  // এক গ্রুপ ২ এর সাথে দুই গ্রুপ ১ মিলিয়ে
    }

    // অবশিষ্ট গ্রুপ ১ এর জন্য ট্যাক্সি বরাদ্দ
    taxis += (count1 + 3) / 4;

    cout << taxis << endl;

    return 0;
}
