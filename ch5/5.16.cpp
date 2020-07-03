/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: two loops comparison
 */ 
#include <iostream>
#include <vector>

int main() {
  int i;
  while (std::cin >> i) { /* ... */ }
  for (int j; std::cin >> j;) { /* ... */ }

  std::vector<int> iv(10, 1);
  for (auto it = iv.begin(); it != iv.end(); ++it) { /* ... */ }
  auto it2 = iv.begin();
  while (it2 != iv.end()) {
    ++it2;
    /* ... */
  }

  // I would choose `for`-loop, because it can do what a `while`-loop can, but
  // not vise versa.

  return 0;
}
