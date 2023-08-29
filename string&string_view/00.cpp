#include <iostream>

void * operator new(std::size_t count) {
	std::cout << count << " bytes allocated\n";
	return malloc(count);
}

bool contains_very(const std::string& s) {
	return s.find("very") != std::string::npos;
}

int main() {
	// 암묵적으로 std::string 객체가 불필요하게 생성된다.
  std::cout << std::boolalpha << contains_very("c++ string is very easy to use")
            << std::endl;

  std::cout << contains_very("c++ string is not easy to use") << std::endl;
}

