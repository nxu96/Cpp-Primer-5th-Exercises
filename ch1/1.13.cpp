/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: rewrite with for loop
 */ 

#include <iostream>

int main() {
  // Rewrite ex1.9
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
    sum += i;
  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;

  // Rewrite ex1.10
  for (int val = 10; val >= 0; --val)
    std::cout << val << " ";
  std::cout << std::endl;

  return 0;
}
