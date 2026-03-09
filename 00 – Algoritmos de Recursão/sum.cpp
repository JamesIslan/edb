#include <format>
#include <iostream>
#include <string>
using namespace std;

int t_sum_rec(int n, int a) {
  if (n == 0) {
    return a;
  }
  return t_sum_rec(n - 1, a + n);
}

int sum_rec(int n) {
  return t_sum_rec(n, 0);
}

int sum_iter(int n) {
  int cont = 0;
  for (int i = n; i != 0; i--) {
    cont += i;
  }
  return cont;
}

int main() {
  int n;
  cin >> n;
  int sum_n_rec = sum_rec(n);
  int sum_n_iter = sum_iter(n);
  cout << "A soma recursiva de " << n << " é " << sum_n_rec << "\n";
  cout << "A soma iterativa de " << n << " é " << sum_n_iter << "\n";
}