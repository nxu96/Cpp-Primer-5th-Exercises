/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Take away: Be awared of the usage of range based for loop in array!
 * and the begin(), end() function for array 
 */ 
#include <iterator>
#include <iostream>

int main() {
  int ia[10];
  for (const auto &e : ia)
    std::cout << e << ' ';
  std::cout << std::endl;
  // -1991177824 32695 0 0 1568058432 21888 1568057456 21888 1038625920 32764
  for (int *bg = std::begin(ia), *ed = std::end(ia); bg != ed; ++bg)
    *bg = 0;

  for (const auto &e : ia)
    std::cout << e << ' ';
  std::cout << std::endl;
  // 0 0 0 0 0 0 0 0 0 0
  for (auto &e : ia) {
    e = 1;
  }
  // 1 1 1 1 1 1 1 1 1 1
  for (const auto &e : ia)
    std::cout << e << ' ';
  std::cout << std::endl;
  return 0;
}
