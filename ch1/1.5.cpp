/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Seprate print statement 
 */ 
#include <iostream>
int main() {
  std::cout << "Enter two numbers:" << std::endl;
  int x = 0, y = 0;
  std::cin >> x >> y;
  std::cout << "The sum of " << x;
  std::cout << " and " << y << " is ";
  std::cout << x + y << std::endl;
  return 0;
}
