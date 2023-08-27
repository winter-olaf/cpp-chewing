#include <cstring>
#include <iostream>
#include <malloc/_malloc.h>

class string {
  char *str;
  int len;

 public:
  string(char c, int n);  // 문자 c 가 n 개 있는 문자열로 정의
  string(const char *s);
  string(const string &s);
  ~string();

  void add_string(const string &s);   // str 뒤에 s 를 붙인다.
  void copy_string(const string &s);  // str 에 s 를 복사한다.
	void print_string(); // str 을 출력한다.
  int strlen();                       // 문자열 길이 리턴
};

string::string(char c, int n) {
	len = n;
	str = new char[len + 1];
	for (int i = 0; i < len; i++) str[i] = c;
	str[len] = '\0';
}

string::string(const char *s) {
	int i=0;
}

void string::add_string(const string &s) {
	auto new_len = std::strlen(s.str);
	char *temp = str;
	str = (char*) realloc(str, len + new_len + 1);
	std::strcat(str, s.str);
}

void string::print_string() {
	std::cout << str << std::endl;
}

string::~string() {
	std::cout << len << std::endl;
	delete[] str;
}

int main() {
	string s1('a', 5);
	s1.print_string();

	s1.add_string(string('b', 3));
	s1.print_string();

	return 0;
}
