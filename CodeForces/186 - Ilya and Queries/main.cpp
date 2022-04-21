#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;

    int m, l, r, cont = 0;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        l--;
        r--;

        while (l < r)
        {
            if (s[l] == s[l + 1])
                cont++;
            l++;
        }

        cout << cont << endl;
        cont = 0;
    }
}