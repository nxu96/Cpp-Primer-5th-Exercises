/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Description
 */ 
#include <iostream>
#include <vector>

int main() {
  std::vector<int> iv;
  int i;
  // NOTE: You have to press ctrl + d to add to mark the end of the file
  while (std::cin >> i)
    iv.push_back(i);
  for (const auto & k : iv)
    std::cout << k << " ";
  std::cout << std::endl;

  return 0;
}
