#include <string.h>
#include <iostream>

class Marine {
  int hp;
  int coord_x, coord_y;
  int damage;
  bool is_dead;
  char* name;

  public:
    Marine();
    Marine(int x, int y, const char* marine_name);
    Marine(int x, int y);
    ~Marine();

    int attack();
    void be_attacked(int damage_earn);
    void move(int x, int y);

    void show_status();
};

Marine::Marine() {
  hp = 50;
  coord_x = coord_y = 0;
  damage = 5;
  is_dead = false;
  name = NULL;
}
Marine::Marine(int x, int y, const char* marine_name) {
  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;
  name = new char[strlen(marine_name)+1]; // +1 for null character
  strcpy(name, marine_name);
}
Marine::Marine(int x, int y) {
  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;
  name = NULL;
}
void Marine::move(int x, int y) {
  coord_x = x;
  coord_y = y;
}
int Marine::attack() { return damage; }
void Marine::be_attacked(int damage_earn) {
  hp -= damage_earn;
  if (hp <= 0) is_dead = true;
}
void Marine::show_status() {
  std::cout << " *** Marine *** " << std::endl;
  std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
            << std::endl;
  std::cout << " HP : " << hp << std::endl;
}
Marine::~Marine() {
    std::cout << "소멸자 호출 ! " << std::endl;
  if (name != NULL) {
    std::cout << name << std::endl;
    delete[] name;
  }
}

int main() {
  // Marine m1(2, 3);
  // Marine m2(3, 5);

  // m1.show_status();
  // m2.show_status();

  // std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
  // m2.be_attacked(m1.attack());

  // m1.show_status();
  // m2.show_status();

  Marine* m[100];
  m[0] = new Marine(2, 3);
  m[1] = new Marine(3, 5, "Marine 2");

  m[0]->show_status();
  m[1]->show_status();

  std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;

  m[1]->be_attacked(m[0]->attack());

  m[0]->show_status();
  m[1]->show_status();

  delete m[0];
  delete m[1];
}
