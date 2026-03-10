#include <format>
#include <iostream>
#include <string>
using namespace std;

int t_sum_rec(int a, int b, int res) {
  return b == 0 ? a + res : t_sum_rec(a, b - 1, res + 1);
}

int sum_rec(int a, int b) {
  return t_sum_rec(a, b, 0);
}

int sum_iter(int a, int b) {
  int res = a;
  while (b > 0) {
    res++;
    b--;
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
    cout << "A soma não é válida para números negativos." << endl;
    return -1;
  }

  int sum_n_rec = sum_rec(a, b);
  int sum_n_iter = sum_iter(a, b);
  cout << "A soma recursiva entre " << a << " e " << b << " é " << sum_n_rec << "\n";
  cout << "A soma iterativa entre " << a << " e " << b << " é " << sum_n_iter << "\n";
}