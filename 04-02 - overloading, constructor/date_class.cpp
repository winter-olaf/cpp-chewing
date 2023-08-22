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

    // Constructor
    Date(int year = 2024, int month = 8, int day = 22) {
      year_ = year;
      month_ = month;
      day_ = day;
    }
};

// 보통 간단한 함수를 제외하면 대부분의 함수들은 클래스 바깥에서 아래와 같이 정의한다.
// 예외적으로 템플릿 클래스의 경우 모두 클래스 내부에 작성하게 된다.
void Date::SetDate(int year, int month, int date) {
  year_ = year;
  month_ = month;
  day_ = date;
}

void Date::ShowDate() {
  std::cout << "오늘은 " << year_ << "년 " << month_ << "월 " << day_ << "일 입니다.\n";
}

int main() {
  Date day(2023, 8, 22);
  // 인자가 없는 생성자를 호출하기 위해서 Date day()와 같이 하면 안됨
  // 위 문장은 Date를 리턴하는 함수 day()를 정의하는 것이기 때문
  Date day2;
  day.ShowDate();
  day2.ShowDate();
  return 0;
}
