#include <format>
#include <iostream>
#include <string>
using namespace std;

int t_fat_rec(int n, int a) {
  if (n == 0) {
    return a;
  }
  return t_fat_rec(n - 1, a * n);
}

int fat_rec(int n) {
  return t_fat_rec(n, 1);
}

int fat_iter(int n) {
  int res = 1;

  for (int i = n; i >= 1; i--) {
    res *= i;
  }
  return res;
}

int main() {
  int n;
  cout << "Digite um valor: ";
  cin >> n;

  if (n < 0) {
    cout << "O fatorial não é válido para números negativos." << endl;
    return -1;
  }

  int fat_n_rec = fat_rec(n);
  int fat_n_iter = fat_iter(n);
  cout << "O fatorial recursivo de " << n << " é " << fat_n_rec << "\n";
  cout << "O fatorial iterativo de " << n << " é " << fat_n_iter << "\n";
}