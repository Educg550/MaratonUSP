#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, temp;
  cin >> n;

  int seq[n];

  for (i = 0; i < n; i++) {
    cin >> seq[i];
  }

  sort(seq, seq + n);

  for (i = 0; i < n; i++) {
    cout << seq[i] << " ";
  }

  cout << endl;
}