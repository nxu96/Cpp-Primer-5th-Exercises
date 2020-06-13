/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Notice how we initialize int array with curly braces, and initialize
 * the vector using array pointer(like iterator). The value copied into iv is from begin(ia)
 * to end(ia)-1.
 */ 
#include <iostream>
#include <vector>
#include <iterator>

int main() {
  int ia[] = {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> iv(std::begin(ia), std::end(ia));
  for (const auto &i : iv)
    std::cout << i << ' ';
  std::cout << std::endl;

  return 0;
}
