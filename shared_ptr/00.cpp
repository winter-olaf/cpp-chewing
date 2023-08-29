#include <iostream>
#include <memory>
#include <vector>

class A {
  int *data;

public:
  A() {
    data = new int[100];
    std::cout << "생성!" << std::endl;
  }
  ~A() {
    std::cout << "소멸!" << std::endl;
    delete[] data;
  }
};

int main() {
  std::vector<std::shared_ptr<A>> vec;

  vec.push_back(std::shared_ptr<A>(new A()));
  vec.push_back(std::shared_ptr<A>(vec[0]));
  vec.push_back(std::shared_ptr<A>(vec[1]));

  std::cout << vec[0].use_count() << std::endl;
  std::cout << "첫 번째 소멸!\n";
  vec.erase(vec.begin());

  std::cout << vec[0].use_count() << std::endl;
  std::cout << "두 번째 소멸!\n";
  vec.erase(vec.begin());

  std::cout << vec[0].use_count() << std::endl;
  std::cout << "세 번째 소멸!\n";
  vec.erase(vec.begin());
  std::cout << vec[0].use_count() << std::endl;

  std::cout << "끝!\n";

  return 0;
}
