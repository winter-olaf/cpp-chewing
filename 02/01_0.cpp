// 참조자, Reference
#include <iostream>

int change_val(int *p) {
  *p = 3;

  return 0;
}

int main() {
  int num = 5;

  std::cout << num << std::endl;
  change_val(&num);
  std::cout << num << std::endl;
}
