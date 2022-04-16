 #include <iostream>
 using namespace std;

int main () {
    int n, maior, sumL = 0, sumC = 0;
    cin >> n;

    int mtr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mtr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        //sumL
        for (int coluna = 0; coluna < n; coluna++) {
            sumL += mtr[i][coluna];
        }

        for (int j = 0; j < n; j++) {
            //sumC
            for (int linha = 0; linha < n; linha++) {
                if (linha != i)
                    sumC += mtr[linha][j];
            }

            if (i == 0 && j == 0) {
                maior = (sumL - mtr[i][j]) + sumC;
            } else if (((sumL - mtr[i][j]) + sumC) > maior) {
                maior = (sumL - mtr[i][j]) + sumC;
            }

            sumC = 0;
        }

        sumL = 0;
    }

    cout << maior << endl;
}