/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Precedence and associativity
 */ 
#include <iostream>

int main() {
  std::cout << (5 + 10 * 20 / 2) << std::endl;  // 105
  int i = 0;
  std::cout <<--i << " " << i++ << std::endl;
  return 0;
}
