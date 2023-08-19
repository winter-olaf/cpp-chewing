#include <iostream>

int function() {
  int a = 5;
  return a;
}

int main() {
  int x = 10, y = 20;
  int& arr[2] = {x, y};

  const int& c = function();
  return 0;
}

// Q1. 레퍼런스가 메모리 상에 반드시 존재해야 하는 경우?
// A1. 레퍼런스가 배열이나 데이터 구조의 일부로 저장되거나, 함수 포인터나 멤버 함수 포인터와 같이 다른 포인터 타입을 가진 변수에 할당되는 경우이다.

// Q2. 필요 없는 경우는?
// A1.
