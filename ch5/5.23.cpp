/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: divide program
 */ 
#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  // You need to check it yourself and throw an exception.
  // NOTE: Integer divide by zero is not an exception in standard C++.
  try {
    if (b == 0) {
      throw std::overflow_error("Divide by zero spotted");
    }
    std::cout << a / b << std::endl;
  } catch (std::overflow_error &e) {
    std::cout << e.what() << "\n"
              << "Try Again?" << std::endl;
  }
  // std::cout << a / b << std::endl;

  return 0;
}
