// Switch
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int user_input;
  cout << "1. Name " << endl;
  cout << "2. Age " << endl;
  cout << "3. Sex " << endl;
  cin >> user_input;

  switch (user_input) {
    case 1:
      cout << "John" << endl;
    case 2:
      cout << "25" << endl;
    case 3:
      cout << "Male" << endl;
      break;
    default:
      cout << "Good." << endl;
      break;
  }
  return 0;
}
