#include <format>
#include <iostream>
#include <string>
using namespace std;

int t_mult_rec(int a, int b, int res) {
  return b == 0 ? res : t_mult_rec(a, b - 1, res + a);
}

int mult_rec(int a, int b) {
  return t_mult_rec(a, b, 0);
}

int mult_iter(int a, int b) {
  int res = 0;
  for (int i = 0; i < b; i++) {
    res += a;
  }
  return res;
}

int main() {
  int a, b;
  cout << "Digite o primeiro valor: ";
  cin >> a;
  cout << "Digite o segundo valor: ";
  cin >> b;

  if (a < 0 || a < 0) {
    cout << "A multiplicação não é válida para termos negativos." << endl;
    return -1;
  }

  int mult_n_rec = mult_rec(a, b);
  int mult_n_iter = mult_iter(a, b);
  cout << "A multiplicação recursiva entre " << a << " e " << b << " é " << mult_n_rec << "\n";
  cout << "A multiplicação iterativa entre " << a << " e " << b << " é " << mult_n_iter << "\n";
}