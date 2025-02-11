#include <iostream>
int main() {
  int x, y;
  int aux;
  float height=1.6;
  double pi=3.1415;
  char character='c';
  bool isStudent=true;

  std::cin >> x >> y;
  aux = x;
  x = y;
  y = aux;
  std::cout << x << y;
  //print initialied variables
  /*
  Printing basic varibles
  */
  std::cout<<"height:\t"<<height << std::endl;
  std::cout<<"pi:\t"<<pi << std::endl;
  std::cout<<"character:\t"<<character << std::endl;
  std::
  std::cout<<"Is student:\t"<<isStudent << "\n";
  // integers variations
  short s = 100;
  //unsigned modifier to use positive values only
  unsigned int i = 200;
  long l = 300;
  long long ll = 4000000000LL;
  return 0;
}