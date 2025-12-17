#include <iostream>
namespace first {
int x = 1;
}
namespace second {
int x = 2;
}

int main() {
  int x = 0;
  std::cout << "In main : x = " << x << '\n'
            << "In first namespace : x = " << first::x << '\n'
            << "In second namespace : x = " << second::x << '\n';
  return 0;
}