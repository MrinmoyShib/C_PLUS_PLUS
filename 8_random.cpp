#include <iostream>

int main() {
  // For random number

  srand(time(NULL));
  int num = (rand());

  std::cout << num << '\n';

  // For random number from 1 to n

  int m = (rand() % 5) + 1;
  std::cout << m;
}

/*#include <iostream>
  #include <ctime>

int main() {
  srand(time(0));
  int randNum = rand() & 5 + 1;

  std::cout << randNum ;
} */