#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, num, min, chute, max, achou = 0;
    cin >> n >> q;

    int v[n];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < q; i++)
    {
        cin >> num;
        min = 0;
        max = n - 1;

        while (!achou && max >= min)
        {
            chute = (min + max) / 2;

            if (num == v[chute])
                achou = 1;
            else if (num > v[chute])
                min = chute + 1;
            else
                max = chute - 1;
        }

        if (achou)
            cout << chute << endl;
        else
            cout << -1 << endl;

        achou = 0;
    }
}