#include <iostream>
int main() {

  std::string name;
  std::cout << "What's your name? : ";
  std::cin >> name;
  std::cout << "Hello " << name << '\n';

  std::string full_name;
  std::cout << "What's your full name? : ";
  std::cin.ignore();
  std::getline(std::cin, full_name);
  std::cout << "Hello " << full_name << '\n';

  std::string full_names;
  std::cout << "What's your full name? : ";
  std::getline(std::cin >> std::ws, full_names);
  std::cout << "Hello " << full_names << '\n';

  return 0;
}