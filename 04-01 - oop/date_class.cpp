#include <iostream>

class Date {
  int year_;
  int month_;
  int day_;

  public:
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    void ShowDate();
};

// 보통 간단한 함수를 제외하면 대부분의 함수들은 클래스 바깥에서 아래와 같이 정의한다.
// 예외적으로 템플릿 클래스의 경우 모두 클래스 내부에 작성하게 된다.
void Date::SetDate(int year, int month, int date) {
  year_ = year;
  month_ = month;
  day_ = date;
}

int main() {

  return 0;
}
