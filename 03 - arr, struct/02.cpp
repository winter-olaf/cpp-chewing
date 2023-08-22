#include <iostream>

int main() {
  int arr_size;

  std::cout << "Enter array size: ";
  std::cin >> arr_size;

  int *arr = new int[arr_size];

  for (int i=0; i<arr_size; i++) {
    std::cin >> arr[i];
  }
  for (int i=0; i<arr_size; i++){
    std::cout << "arr[" << i << "] = " << arr[i] << "\n";
  }
  delete[] arr;
  return 0;
}
