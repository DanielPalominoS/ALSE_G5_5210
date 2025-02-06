#include <iostream>
int main() {
  int x, y;
  int aux;
  cin >> x >> y;
  aux = x;
  x = y;
  y = aux;
  cout << x << y;
  return 0;
}