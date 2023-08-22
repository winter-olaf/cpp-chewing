#include <iostream>

// CPP에서는 struct만 사용하고 맨 마지막의 Animal을 제거해도 되지만, c/cpp 호환을 위해 아래와 같이 사용하는 습관을 들이면 좋다.
typedef struct Animal {
    char name[30];
    int age;
    int health;
    int food;
    int clean;
} Animal;

void create_animal(Animal *animal) {
  std::cout << "동물의 이름? ";
  std::cin >> animal->name;

  std::cout << "Age? ";
  std::cin >> animal->age;

  animal->health = 100;
  animal->food = 100;
  animal->clean = 100;
}

void play(Animal *animal) {
  animal->health += 10;
  animal->food -= 20;
  animal->clean -= 30;
}

void one_day_pass(Animal *animal) {
  animal->health -= 10;
  animal->food -= 30;
  animal->clean -= 20;
}

void show_test(Animal *animal) {
  std::cout << animal->name << "의 상태" << std::endl;
  std::cout << "체력: " << animal->health << std::endl;
  std::cout << "배부름: " << animal->food << std::endl;
  std::cout <<" 청결: " << animal->clean << std::endl;
}

int main() {
  Animal *list[10];
  int animal_num = 0;

  for (;;) {
    std:: cout << "1. 동물 추가하기" << std::endl;
    std:: cout << "2. 놀기" << std::endl;
    std:: cout << "3. 상태 보기" << std::endl;

    int input;
    std::cin >> input;

    switch(input) {
      int selected_idx;
      case 1:
        list[animal_num] = new Animal;
        create_animal(list[animal_num]);
        animal_num++;
        break;
      case 2:
        std::cout << "play with which animal?: ";
        std::cin >> selected_idx;

        if (selected_idx < animal_num) {
          play(list[selected_idx]);
        } else {
          std::cout << "없는 동물입니다." << std::endl;
        }
        break;

      case 3:
        std::cout << "show status of which animal?: "  << std::endl;
        std::cin >> selected_idx;
        if (selected_idx < animal_num) show_test(list[selected_idx]);
        break;
    }
    for (int i=0; i!=animal_num; i++) {
      one_day_pass(list[i]);
    }
  }
  for (int i=0; i != animal_num; i++) {
    delete list[i];
  }
}
