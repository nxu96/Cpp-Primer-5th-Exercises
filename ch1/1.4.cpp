/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Read from input to the istream and print the product   
 *               instead of add.
 */ 

#include <iostream>
int main() {
  std::cout << "Enter two numbers:" << std::endl;
  int x, y;
  std::cin >> x >> y;
  std::cout << "The product of " << x << " and " << y << " is "
            << x * y << std::endl;
  return 0;
}
