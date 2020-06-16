/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Numerical overflow
 */ 
#include <iostream>
#include <limits>

int main() {
  // Overflow means the value computed from the variables is out of the range
  // of values that the type of the variable can hold.
  //
  // The behaviour of overflow is undefined.

  int a = std::numeric_limits<int>::max();
  int b = a + 1;
  int c = std::numeric_limits<int>::min();
  int d = c - 1;
  int e = a / 2 + 1;
  int f = e * 2;

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
  std::cout << "d = " << d << std::endl;
  std::cout << "e = " << e << std::endl;
  std::cout << "f = " << f << std::endl;

  return 0;
}
