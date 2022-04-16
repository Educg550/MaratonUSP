#include "bits/stdc++.h"
using namespace std;

int main () {
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int q, i, j, sum = 0;
    cin >> q;

    for (int ir = 0; ir < q; ir++) {
        cin >> i >> j;

        while (i <= j) {
            sum += nums[i];
            i++;
        }

        cout << sum << endl;
        sum = 0;
    }
}