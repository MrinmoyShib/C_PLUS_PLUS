#include <iostream>
namespace first {
int x = 1;
}
namespace second {
int x = 2;
}

int main() {
  using namespace first;
  std::cout << "In first namespace : x = " << x << '\n'
            << "In second namespace : x = " << second::x << '\n';

  return 0;
}