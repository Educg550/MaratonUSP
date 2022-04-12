#include "bits/stdc++.h"
using namespace std;

int main () {
    int w, i = 1;
    cin >> w;

    w--;

    for ( ; i <= w; i++) {
        if (w % 2 == 0 && i % 2 == 0) {
            cout << "YES" << endl;
            break;
        }

        w--;
    }

    if (w % 2 != 0 || i % 2 != 0 || w == 0) {
        cout << "NO" << endl;
    }
}