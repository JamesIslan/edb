#include <format>
#include <iostream>
#include <string>
using namespace std;

int t_mult_rec(int n, int a) {
  if (n == 0) {
    return a;
  }
  return t_mult_rec(n - 1, a * n);
}

int mult_rec(int n) {
  return t_mult_rec(n, 1);
}

int mult_iter(int n) {
  int cont = 1;

  for (int i = n; i >= 1; i--) {
    cont *= i;
  }
  return cont;
}

int main() {
  int n;
  cin >> n;
  int mult_n_rec = mult_rec(n);
  int mult_n_iter = mult_iter(n);
  cout << "A multiplicação recursiva de " << n << " é " << mult_n_rec << "\n";
  cout << "A multiplicação iterativa de " << n << " é " << mult_n_iter << "\n";
}