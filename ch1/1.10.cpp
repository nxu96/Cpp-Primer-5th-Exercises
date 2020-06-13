/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Decrement operator --
 */ 

#include <iostream>

int main() {
  int val = 10;
  while (val >= 0)
    std::cout << val-- << " ";
  std::cout << std::endl;
  return 0;
}
