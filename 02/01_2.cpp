#include <iostream>

int main() {
  int a = 10;
  int &another_a = a;

  int b = 3;
  another_a = b;

  std::cout << "a: " << a << std::endl;
  std::cout << "ano: " << another_a << std::endl;

  int c = 20;
  int *d = &c;

  std::cout << "d: " << d << std::endl;

  int e = 30;
  *d = e;

  std::cout << "d: " << *d << std::endl;
}
