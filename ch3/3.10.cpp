#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string s;
  std::cin >> s;
  for (const auto &c : s)
    if (!ispunct(c))
      std::cout << c;
  std::cout << std::endl;

  return 0;
}
