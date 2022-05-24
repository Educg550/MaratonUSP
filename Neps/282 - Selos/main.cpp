#include <bits/stdc++.h>
using namespace std;

bool eh_primo(long long n) {
  int sq = sqrt(n);
  
  for (int i = 2; i <= sq; i++) {
    if ((n % i) == 0) return false;
  }
  return true;
}

int main() {
	long long n;
  cin >> n;

  if (eh_primo(n))
    cout << "N" << endl;
  else
    cout << "S" << endl;
}