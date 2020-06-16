/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: 
 */ 
#include <iostream>

int main() {
  int x[10];
  int *p = x;
  std::cout << sizeof(x) / sizeof(*x) << " " // 10
            << sizeof(x) << " "
            << sizeof(*x) << " "
            << std::endl;
  std::cout << sizeof(p) / sizeof(*p)  << " "// 2
            << sizeof(p) << " "
            << sizeof(*p) << " "
            << std::endl;  // the size of a pointer / the size of an int

  return 0;
}
