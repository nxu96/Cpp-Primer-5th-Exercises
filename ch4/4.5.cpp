/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Arithmetic operators
 */ 
#include <iostream>

int main() {
  std::cout << -30 * 3 + 21 / 5 << std::endl;  // -86
  std::cout << -30 + 3 * 21 / 5 << std::endl;  // -18
  std::cout <<  30 / 3 * 21 % 5 << std::endl;  // 0
  std::cout << -30 / 3 * 21 % 4 << std::endl;  // -2

  return 0;
}
