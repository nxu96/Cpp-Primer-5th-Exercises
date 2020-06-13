#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> text;

  std::string line;
  while (getline(std::cin, line))
    text.push_back(line);
  std::cout << "Text size is " << text.size() << std::endl;
  // NOTE: Terminating condition is it->empty(). So this for loop
  // is only executed for only once.
  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    for (auto &c : *it)
      c = toupper(c);  // toupper(char)

  for (auto &elem : text)
    if (elem.empty())
      std::cout << std::endl;
    else
      std::cout << elem << " ";
  std::cout << std::endl;
  return 0;
}
