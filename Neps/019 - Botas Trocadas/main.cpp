#include "bits/stdc++.h"
using namespace std;

int main () {
    int n, pares = 0;
    cin >> n;

    int tam[n];
    char pe[n];

    for (int i = 0; i < n; i++) {
        cin >> tam[i] >> pe[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tam[i] == tam[j] && i != j && tam[i] != -1 && tam[j] != -1) {
                if (pe[i] != pe[j]) {
                    pares++;
                    tam[i] = -1;
                    tam[j] = -1;
                }
            }
        }
    }

    cout << pares << endl;
}