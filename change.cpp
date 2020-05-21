#include <iostream>

int get_change(int m) {
  int tens = m / 10;
  int fives = ( m % 10 )/5;
  int ones = ( (m%10)%5)/1;
  int n = tens + fives + ones;
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
