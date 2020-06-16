/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Group subexpressions
 */ 
#include <iostream>

int main() {
  // (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2) = 91
  std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;

  return 0;
}
