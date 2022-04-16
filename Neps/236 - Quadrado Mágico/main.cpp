#include "bits/stdc++.h"
using namespace std;

int main () {
    int n, out = 0, sum1 = 0, sum2 = 0;
    cin >> n;

    int mtr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mtr[i][j];
            if (i == 0)
                sum1 += mtr[0][j];
        }
    }

    // Linhas
    for (int i = 0; i < n && out != -1; i++) {
        for (int j = 0; j < n && out != -1; j++) {
                sum2 += mtr[i][j];
        }

        if (sum1 != sum2) {
            out = -1;
        }

        sum2 = 0;
    }

    // Colunas
    for (int i = 0; i < n && out != -1; i++) {
        for (int j = 0; j < n && out != -1; j++) {
                sum2 += mtr[j][i];
        }

        if (sum1 != sum2) {
            out = -1;
        }

        sum2 = 0;
    }

    int j = n - 1;

    // Diagonais
    for (int i = 0; i < n && out != -1; i++){
        sum2 += mtr[i][i];   
    }
        
    if (sum1 != sum2) {
        out = -1;
    }

    sum2 = 0;

    for (int i = 0; i < n && out != -1; i++) {
        sum2 += mtr[i][j];
        j--;
    }

    if (sum1 != sum2) {
        out = -1;
    }

    if (out != -1)
        out = sum1;

    cout << out << endl;
}