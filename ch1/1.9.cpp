/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: while flow of control
 */ 
#include <iostream>

int main() {
  int sum = 0, val = 50;
  while (val <= 100) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;
  return 0;
}
