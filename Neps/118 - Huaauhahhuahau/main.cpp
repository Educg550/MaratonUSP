#include <bits/stdc++.h>
using namespace std;

int eh_palindromo(string a) {
  string b = "";
  int eh_palindromo = 1, j = a.length() - 1;
  
  for (int i = 0; i < a.length() && eh_palindromo; i++) {
    if (a.at(i) != a.at(j)) {
      eh_palindromo = 0;
    }
    else {
      j--;
    }
  }

  return eh_palindromo;
}

int main() {
  string risada, palin = "";
  char letra;
  cin >> risada;

  for (int i = 0; i < risada.length(); i++) {
    letra = risada.at(i);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      palin += letra;
    }
  }

  if (eh_palindromo(palin)) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }
}