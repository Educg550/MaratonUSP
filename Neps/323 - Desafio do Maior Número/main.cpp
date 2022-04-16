#include "bits/stdc++.h"
using namespace std;

int main () {
    int nums[100];
    int bigger = 0;

    for (int i = 0; i < 100; i++) {
        cin >> nums[i];

        if (nums[i] == 0) {
            cout << bigger << endl;
            break;
        } else if (bigger < nums[i]) {
            bigger = nums[i];
        }
    }
}