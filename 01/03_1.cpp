// if-else statement
#include <iostream>

int main() {
  int lucky_number = 3;
  std::cout << "Guess my lucky number: " << std::endl;

  int user_input;

  while (1) {
    std::cout << "Enter : ";
    std::cin >> user_input;

    if (lucky_number == user_input) {
      std::cout << "Success!!" << std::endl;
      break;
    } else {
      std::cout << "Fail!!" << std::endl;
    }
  }
  return 0;
}
