#include <iostream>
#include <string>

std::string_view return_sv() {
  std::string s = "this is a string";
  std::string_view sv = s;

  return sv;
}

int main() {
  std::string_view sv = return_sv();  // <- sv 가 가리키는 s 는 이미 소멸됨!

  // Undefined behavior!!!!
  std::cout << sv << std::endl;
}
