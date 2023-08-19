#include <iostream>

int main() {
  int i = 0, sum = 0;

  // for (i=0; i < 10; i++) {
  //   sum += i;
  //   std::cout << sum << " : + " << i << std::endl;
  // }

  while (i++ < 10) {
    sum += i;
  }
  std::cout << sum << std::endl;

  return 0;
}
