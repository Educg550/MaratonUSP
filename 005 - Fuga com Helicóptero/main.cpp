#include "bits/stdc++.h"
using namespace std;

int main () {
    int h, p, f, d;
    cin >> h >> p >> f >> d;

    // Anti-horário
    if (d == 1) {
        for ( ; f != h && f != p; f++) {
            if (f > 15) {
                f = -1;
            }
        }
    } else {
        for ( ; f != h && f != p; f--) {
            if (f < 0) {
                f = 16;
            }
        }
    }

    if (f == h) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
}