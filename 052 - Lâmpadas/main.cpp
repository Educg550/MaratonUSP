#include "bits/stdc++.h"
using namespace std;

int main () {
    int times, a, b, inter;
    a = 0;
    b = 0;
    cin >> times;

    for (int i = 0; i < times; i++) {
        cin >> inter;

        if (a == 0) {
            a = 1;
        } else {
            a = 0;
        }

        if (inter == 2 && b == 0) {
            b = 1;
        } else if (inter == 2 && b == 1) {
            b = 0;
        }
    }

    cout << a << endl;
    cout << b << endl;
}