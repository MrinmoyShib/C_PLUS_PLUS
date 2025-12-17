#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text;
using number = double;

int main() {
  pairlist_t pairlist;

  text firstname = "Micheal";
  std::cout << firstname << '\n';

  number x = 25.7;
  std::cout << x << '\n';

  return 0;
}